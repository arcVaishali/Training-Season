#include <bits/stdc++.h>

using namespace std ;
class Solution{
    vector< int > vec ;
    
    public:
    void insert( int ) ;
    int findKthLargest( int ) ;
};

void Solution:: insert( int n ) {

}

int Solution:: findKthLargest( int k ) {

}

int main() {
    Solution s ;

    int ch = 1 , k ;
    cout << "Enter k :: " ;
    cin >> k ;
    while ( ch ) {
        int num = rand() ;
        s.insert( num ) ;
        cout << s.findKthLargest( k ) << endl ; ;

        cout << "Do you want to continue? :: " ;
        cin >> ch ;
        cout << endl ;
    }


    

}