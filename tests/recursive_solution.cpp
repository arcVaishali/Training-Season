#include <iostream> 
#include <vector> 

using namespace std ;

void func( vector< vector< int > > &ans , vector< int > seq , int index , int count , vector< int > a , vector< int > b , int n , int m ) {
    if ( count % 2 != 0 ) {
        for ( int j = 0 ; j < m ; j++ ) {
            if ( b[ j ] > a[ index ] ) {
                count++ ;
                seq.push_back( b[ j ] ) ;
                func( ans , seq , j , count , a , b , n , m ) ;
                seq.pop_back() ;
                count-- ;
            }
        }
    }
    if ( count % 2 == 0 ) {
        ans.push_back( seq ) ;
        for ( int i = 0 ; i < n ; i++ ) {
            if ( a[ i ] > b[index ] ) {
                count++ ;
                seq.push_back( a[ i ] ) ;
                func( ans , seq , i , count , a , b , n , m ) ;
                seq.pop_back() ;
                count-- ;
            }
        }
    } 
    
}

int main() {
    vector< int > a = { 10 , 15 , 25 } , b = { 1 , 5 , 20 , 30 } ;
    int n = a.size() , m = b.size() ;

    vector< vector< int > > ans ;
    for ( int i = 0 ; i < n ; i++ ) {
        int count = 1 ;
        vector< int > vec = { a[ i ] } ;
        func( ans , vec , i , count , a , b , n , m ) ;
    }

    for ( auto a : ans ) {
         for ( auto b : a ) {
            cout << b << " " ;
         }
         cout << endl ;
    }
}
