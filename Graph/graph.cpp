#include <iostream>
#include <vector>

using namespace std ;

class Vertex {
    public :
    char name ;
    int id ;

    Vertex( char n , int i ) : name( n ) , id( i ) {}
};

class VertexNeighbour {
    int data ;
    VertexNeighbour *nex ;
};
class VertexNeighbourSir{
    VertexNodePointer *data ;
    VertexNeighbourSir *nex ;
}
class VertexNodePointer{
    int data ;
    VertexNodePointer* next ;
    VertexNeighbour* neigh ;
};


bool isAdjacent( VertexNodePointer* graph , int d1 , int d2 ) {
    int find ;
    while ( graph != nullptr ) {
        if ( graph -> data == d1 ) {
            VertexNeighbour *n = graph -> neigh ;
            while ( n != nullptr ) {
                if ( n -> data == d2 ) {
                    cout << "Present" << endl ;
                    break ;
                }
                n = n -> nex ;
            }
            break ;
        } 
        if ( graph -> data == d2 ) {
            VertexNeighbour *n = graph -> neigh ;
            while ( n != nullptr ) {
                if ( n -> data == d1 ) {
                    cout << "Present" << endl ;
                    break ;
                }
                n = n -> nex ;
            }
            break ;
        }
        graph = graph -> next ;
        cout << "Not present" << endl ;
    }
}

void getAllAdjacent( VertexNodePointer* graph , int d ) {
    while ( graph != nullptr ) {

    }
}

void PreorderTraversal( VertexNodePointer *graph ) {
    while ( graph != nullptr ) {
        cout << graph -> data << endl ;
        
        graph = graph -> next ;
    }
}

void preorder( VertexNode *G , Hashset<VertexNode*> &vis ) {
    if ( G == nullptr ) return ;
// Topological sorting is basically post order traversal of graph 
    cout << G -> data << endl ;
    List<VertexNode *> lis = getAdj( G ) ;
    for ( auto a : lis ) {
        if ( !vis.contains(a) ) {
            preorder( a ) ;
        }
    }
}

void DFS( ) {

}

// DEPENDENCY topological sort aka postorder traversal
void PostOrderTraversalAKATopologicalSorting( ) {

}

int main() {
    vector<Vertex> v = { Vertex( 'A' , 0 ) , Vertex( 'B' , 1 ) , Vertex( 'C' , 2 ) } ;
    for ( auto b : v ) {
        cout << b.name << " " << b.id << endl ;
    }

    

    // Is adjacenct o(N), o(1)

    // adjacency list representation (using linked list, extra memory usage )
    // three parts for vertex representation- data part , pointer to next vertex and pointer to it's adjacent nodes.
    // two parts in adjacent nodes- data part , next pointer 
    return 0 ;
}