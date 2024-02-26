#include <iostream>

using namespace std;

class Node {
    int data ;
    Node * next ;

    public :
    Node( int ) ; 
    Node( int , Node * ) ;
    Node( Node *) ;
    ~Node() ;

    int getData() const ;
    void setData( int ) ;
    Node *getNext() const ;
    void setNext( Node *) ;
};

Node:: Node( int d ) : data(d) , next(nullptr) {}
Node:: Node( int d , Node *n ) : data( d ) , next( n ) {} 
Node:: Node( Node *rhs ) : data( rhs -> data ) , next( rhs -> next ) {}  
Node:: ~Node() {
    delete this ;
}

int Node :: getData() const {
    return data ;
} 
Node * Node:: getNext() const {
    return next ;
}
void Node :: setData( int d ) {
    data = d ;
    next = nullptr ;
    return ;
}
void Node:: setNext( Node *nex ) {
    next = nex ;
    return ;
} 

void printLinkedList( Node *head ) {
    while ( head != nullptr ) {
        cout << head->getData() << " --> " ;
        head = head->getNext() ;
    }
    return ;
}

Node* createSortedLinkedList(){
    Node *head = nullptr ;
    Node *tail = nullptr ;
    int ch = 1 ;
    do {
        int val ;
        cout << "Enter value :: " ;
        cin >> val ;

        Node *node = new Node( val ) ;
        if ( head == nullptr ) {
            head = node ;
            tail = node ;
        } else {
            tail->setNext( node ) ;
            tail = node ;
        }
        cout << endl << "Do you want to continue? :: " ;
        cin >> ch ;
    } while ( ch ) ;

    return head ;
}

Node *mergeLinkedListsBetter( Node *head1 , Node *head2 ) {
    if ( head1 == nullptr ) return head2 ;
    if ( head2 == nullptr ) return head1 ;

    Node *head3 = nullptr , *tail = nullptr ;
    if ( (head1 -> getData()) < (head2 -> getData()) ) {
        head3 = head1 ; head1 = head1 -> getNext() ;
    } else {
        head3 = head2 ; head2 = head2 -> getNext() ;
    }
    tail = head3 ;
    
    while ( head1 != nullptr && head2 != nullptr ) {
        if ( (head1 -> getData()) < (head2 -> getData()) ) {
            tail -> setNext( head1 )  ; 
            tail = head1 ; 
            head1 = head1 ->  getNext() ;
        } else {
            tail -> setNext( head2 ) ; 
            tail = head2 ;
            head2 = head2 -> getNext() ;
        }
    }
    if ( head1 != nullptr ) {
        tail -> setNext( head1 ) ;
    } else if ( head2 != nullptr ) {
        tail -> setNext( head2 ) ;
    }

    printLinkedList( head3 ) ;
    return nullptr ;    
}
Node *mergeLinkedLists( Node *l1 , Node *l2 ) {

    Node *temp1 = l1 , *temp2 = l2 ;
    Node *result , *head = nullptr ;

    while ( temp1 != nullptr && temp2 != nullptr ) {

        int d1 = temp1->getData() , d2 = temp2->getData() ;
        Node* n1 = temp1->getNext() , *n2 = temp2->getNext() ;

        if ( d1 < d2 ) {
            Node *node = new Node( d1 ) ;
            temp1 = n1 ;
            if ( head == nullptr ) {
                head = node ;
                result = node ;
            } else {
                result->setNext( node ) ;
                result = node ; 
            }        
        } else {
            Node *node = new Node( d2 ) ;
            temp2 = n2 ;
            if ( head == nullptr ) {
                head = node ;
                result = node ;
            } else {
                result->setNext( node ) ;
                result = node ; 
            } 
        }
    }
    while ( temp1 != nullptr ) {
        int d = temp1->getData() ;
        Node *nex = temp1->getNext() ;

        Node *node = new Node( d ) ;
        temp1 = nex ;
        result->setNext( node ) ;
        result = node ; 
    }
    while ( temp2 != nullptr ) {
        int d = temp2->getData() ;
        Node *nex = temp2->getNext() ;

        Node *node = new Node( d ) ; 
        temp2 = nex  ;
        result->setNext( node ) ;
        result = node ;
    }

    return head ;
}

int main() {
    Node *l1 = createSortedLinkedList() ;
    Node *l2 = createSortedLinkedList() ;

    Node *head = mergeLinkedListsBetter( l1 , l2 );

    printLinkedList(head) ;  
    return 0 ;      
}