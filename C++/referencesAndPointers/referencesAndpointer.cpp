#include <iostream>

using namespace std ;

struct a {
    int data ;
    int val ;
};

int main() {
    struct a v ;
    v.data = 100 ;
    v.val = 9 ;

    struct a &b = v ;

    b.data = 900 ;
    b.val = 0 ;

    cout << v.data << " " << v.val << endl ;
    cout << b.data << " " << b.val << endl ;

    return 0 ;
}