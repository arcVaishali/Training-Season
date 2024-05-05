#include <stdio.h>

int f(int x, int *py, int **pz) {
    int y, z;
    **pz += 1;
    z = **pz;
    *py += 2;
    y = *py;
    x += 3;
    return x + y + z;
}

int main() {
    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    char *ptr ;
    ptr = "Hello World" ; // ISO c++ forbids converting string constant to char* but in c it will work
    printf("%c\n" , *&*ptr ) ;

    printf("%d", f(c, b, a));


    /*
    register r = 10 ;
    char h[ ] = "Hi" ;
    printf("%s %d\n" , h , r ) ; // ERROR
    */

   int fun() ;
   (*fun)();

    return 0;
}

int fun() {
    printf("Hello") ;
    return 0 ;
}
