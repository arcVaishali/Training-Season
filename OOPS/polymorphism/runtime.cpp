#include <iostream>

using namespace std ;

class Animal{
    public:
    string color = "Black" ;
    void print() {
        cout << "Animal" << endl ;
    }
};
class Dog:public Animal{
    public :
    string color = "Yellow" ;
    void print() {
        cout << "Dog" << endl ;
    }
};

int main() {
    Animal d = Dog() ;
    Dog di = Dog() ;
    cout << d.color << endl ;
    cout << di.color << endl ;
    d.print() ;
    di.print() ;
}