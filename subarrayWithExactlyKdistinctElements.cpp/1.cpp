#include <iostream>
#include <vector> 
#include <map> 

using namespace std ;

class Solution{
    public :
    int answer( vector< int > nums , int n , int k ) {
        map< int , int > mp ;
        int count = 0 ;
        for ( int i = 0 , j = 0 ; j < n ; j++ ) {
            mp[ nums[ j ] ]++ ; 
            while( mp.size() > k ) {
                mp[ nums[ i ] ]-- ;
                if ( mp[ nums[ i ] ] == 0 ) mp.erase( nums[ i ] ) ;
                i++ ;
            } 
            map< int , int > mp1 = mp ;
            int idx = i ;
            while ( mp.size() == k ) {
                count++ ;
                mp[ nums[ i ] ]-- ; 
                if ( mp[ nums[ i ] ] == 0 ) mp.erase( nums[ i ] ) ;
                i++ ;
            } 
            mp = mp1 ;
            i = idx ;
        }
        return count ;  
    }
};

int main() {
    int n , k ;
    cout << "Enter size of array :: " << endl ;
    cin >> n ;

    vector< int > arr( n ,0 ) ;
    for ( int i = 0 ; i < n ; i++ ) {
        cout << "Enter element :: " << endl ;
        cin >> arr[ i ] ;
    }

    cout << "Enter k:: " << endl ;
    cin >> k ;

    Solution obj ;
    cout << obj.answer( arr , n , k ) << endl ;

    return 0 ;
}