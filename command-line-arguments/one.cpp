#include <bits/stdc++.h>

using namespace std ;

int main( int argc , char *argv[] ) {
    cout << "The argument is :: " << argc << endl ; 
    int i = 0 ;
    while ( i < argc ) {
        cout << "Argument " << i <<  " is :: " << argv[ i ] << endl ;

        i++ ; 
    }
    return 0 ;
}