#include <iostream> 
#include <string>
#include <vector>
using namespace std ;

class Solution{
    public:
    int answer( vector< string > arr , int n , int idx , string target ) {
        if ( arr[ idx ] == target ) return 0 ;

        int steps = 1 ;
        int end = idx ;
        idx = ( idx + 1 ) % n ;
        while ( idx != end ) {
            if ( arr[ idx ] == target ) return steps ;
            steps++ ;
            idx = ( idx + 1 ) % n ;
        }
        return -1 ;
    }
};

int main() {
    int n ;
    cout << "Enter size of array :: " << endl ;
    cin >> n ;
    vector< string > arr( n ) ;

    for ( int i = 0 ; i <n ; i++ ) {
        cout << "Enter array element :: " << endl ;
        cin >> arr[ i ] ;
    }

    int idx ;
    cout << "Enter starting index " << endl ;
    cin >> idx ;

    string search ;
    cout << "Enter target :: " << endl ;
    cin >> search ;

    Solution obj ;
    cout << obj.answer( arr , n , idx , search ) << endl ;

    return 0 ;


}