#include <iostream>

using namespace std ;

class Node{
    public:
    int data ;
    Node *next ;

    Node( int ) ;
    Node( int , Node* ) ;
    ~Node() ;
}

Node::Node( int d ) : data( d ) , next( nullptr ) {} 
Node::Node( int d , Node * n) : data( d ) , next( n ) {} 
Node::~Node() {
    delete this ;
}

Node merge( Node h1 , Node h2 ) {
    if ( h1 == NULL ) return h2 ;
    if ( h2 == NULL ) return h1 ;

    Node h3 , tail ;
    if ( h1.data < h2.data ) {
        h3 = h1 ; h1 = h1.next ;
    } else {
        h3 = h2 ; h2 = h2.next ;
    }
    tail = h3 ;

    while ( h1 != NULL && h2 != NULL ) {
    }
}

int main() {
    Node node1(3) ;
    Node node2(2 , *node1) ;
    Node h1(1 , *node2 ) ;

    Node node3(7) ;
    Node node4(6 , *node3 ) ;
    Node h2(5 , *node4 ) ;

    Node *ans = merge( h1 , h2 ) ;


    
}

