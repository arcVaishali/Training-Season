#include <bits/stdc++.h>

using namespace std ;

int main() {
    int arr[ 9 ] = { 4 , 0 , 3 , 2 , 5 , 4 , 0 , 3 , 2 } ;

    // COUNTNG  SORT 
    int freq[ 6 ] = { 0 } ;
    for ( int i = 0 ; i < 9 ; i++ ) {
        freq[ arr[ i ] ]++ ; 
    } 

    // Calculating cumulative frequency 
    for ( int i = 1 ; i < 6 ; i++ ) {
        freq[ i ] += freq[ i - 1 ] ;
    }

    vector< int > ans( 9 , 0 ) ;
    for ( int i = 8 ; i >= 0 ; i-- ) {
        ans[ freq[ arr[ i ] ] - 1 ] = arr[ i ] ;
        freq[ arr[ i ] ]-- ; 
    }

    for ( int i = 0 ; i < 9 ; i++ ) {
       cout << ans[ i ] << "  " ;  
    }
    cout << "\n" ;

    return 0 ;
}