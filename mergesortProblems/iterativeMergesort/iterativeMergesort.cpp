#include <iostream>
#include <vector>

using namespace std ;

void merge( vector< int > &arr , int idx , int size ) {
    int start = idx , end = size - 1 ;
    while ( start <= end ) {
        
    }
}

int main() {
    vector< int > arr = { 5 , 4 , 3 , 2 , 1 } ;
    int group = 2 , n = arr.size() ;

    while ( group < n ) {
        int size = group ;
        for ( int i = 0 ; i < n - 1 ; i = i + size ) {
            merge( arr , i , size ) ;
        }
        group *= 2 ;        
    }
}