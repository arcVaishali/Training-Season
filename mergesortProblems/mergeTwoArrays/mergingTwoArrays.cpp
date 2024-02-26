#include <iostream> 
#include <vector>

using namespace std ;

void mergeArrays( vector< int > arr1 , vector< int > &arr2 , int n , int m ) {
    int one = n - 1 , two = m - n - 1 , k = m - 1 ;
    while ( one >= 0 && two >= 0 ) {
        if ( arr1[ one ] > arr2[ two ] ) {
            arr2[ k-- ] = arr1[ one-- ] ;
        } else {
            arr2[ k-- ] = arr2[ two-- ] ;
        }
    }  
    while ( one >= 0 ) {
        arr2[ k-- ] = arr1[ one-- ] ;
    }
    while ( two >= 0 ) {
        arr2[ k-- ] = arr2[ two-- ] ;
    }
    return ;
}

void printArray( vector< int > arr ) {
    for ( const int &val : arr ) cout << val << " " ;
    cout << endl ;
    return ;
}

int main() {
    vector< int > arr1 = { 1 , 2 , 3 , 4 } , arr2 = { 5 , 6 , 7 , 0 , 0 , 0 , 0 } ;
    int n = arr1.size() , m = arr2.size() ; 
    mergeArrays( arr1 , arr2 , n , m ) ; 

    printArray( arr2 ) ;

    return 0 ;
}