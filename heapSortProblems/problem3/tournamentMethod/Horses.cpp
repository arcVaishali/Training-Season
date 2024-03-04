#include <iostream>

using namespace std ;

int NumberOfMatchesToFindKthFastestHorse( int horses , int tracks , int k ) {
    
}

int main() {
    int n = 25 , t = 5 , k ;
    /*
    Given 25 horses and 5 tracks, find the number of matches that will be held in total = 5 + 1 = 6
    (Since, we have only 5 tracks so, in a single match only 5 horses will compete and so on )
    */

    cout << "Enter the value of k :: " << endl ;
    cin >> k ;

    cout << NumberOfMatchesToFindKthFastestHorse( n , t , k ) << endl ;

    return 0 ;
}