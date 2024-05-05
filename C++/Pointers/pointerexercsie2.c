#include <stdio.h>
#include <string.h>
#define print(a) printf( "%d ", a )

int a ; 
void z( int n ) {
    n += a ;
    print( n ) ;
}

void x( int *p ) {
    int a = *p + 2 ;
    z( a ) ;
    *p = a ;
    print( a ) ;
}

int main( int argc , char *argv[ ]) {

    printf("%c" , **++argv) ; // prints the first character of the second argument
    /*
    gcc -o myprog pointerexercise2.c
    ./myprog one two

    OUTPUT:
    o
    */

    printf("\n") ;

    a = 6 ;
    x( &a ) ;
    print( a ) ;

    printf( "\n" ) ;

    char p[ 20 ] ;
    int i ;
    char *s ;
    s = "string" ;
    int l = strlen( s ) ;
    for ( i = 0 ; i < l ; i++ ) {
        p[ i ] = s[ l - i - 1 ] ;
    }
    printf( "%s\n" , p ) ; // no output because at 29, s[ l - i ] is s[ 6 - 0 ] which is '\0', therefore it should have been s[ l - i - 1 ] ;
    return 0 ;
}
