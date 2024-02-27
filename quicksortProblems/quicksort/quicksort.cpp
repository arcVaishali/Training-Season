#include <iostream>
#include <vector>

using namespace std ;

int partition( vector< int > &arr , int low , int high ) {
    int pivot = low ;
    low++ ;
    while ( low < high ) {
        while ( low < high && arr[ low ] < arr[ pivot ] ) low++ ;
        while ( low < high && arr[ high ] > arr[ pivot ] ) high-- ;

        if ( low < high ) swap( arr[ low ] , arr[ high ] ) ;
    }
    int ans = arr[ low ] ;
    swap( arr[ low ] , arr[ pivot ] ) ;
    return ans ;
}

void qs( vector< int > &arr , int l , int h  ) {
    if ( l < h ) {
        int mid = partition( arr , l , h ) ;

        qs( arr , l , mid - 1  ) ;
        qs( arr , mid + 1 , h  ) ;
    }
    return ;
}

int main() {
    vector< int > arr = { 9 , 1 , 2 , 4 , 5 } ;
    int l = 0 , h = arr.size() - 1 ; 

    qs( arr , l , h ) ;

    for ( const int &val : arr ) cout << val << " " ;
    cout << endl ;

}