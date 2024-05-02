#include <iostream>

using namespace std ;

class Base{
    private : 
    int privateData = 8 ;
    protected :
    int protectedData = 9 ;
    public:
    int publicData = 10 ;

    int getPVTData() {
        return privateData ;
    }
};

class Derived:public Base{
    public :
    int getProtectedData() {
        return protectedData ;
    }
    int getPublicData() {
        return publicData ;
    }
};

class ProtectedDerived: protected Base{
    public :
    int getProtectedData() {
        return protectedData ;
    } 
    int getPublicData() {
        return publicData ;
    }
}; 

class PrivateDerived:private Base{
    public : 
    int getProtectedData() {
        return protectedData ;
    }
    int getPublicData() {
        return publicData ;
    }
};

int main() {

    Derived d ;
    cout << "Public Inheritance" << endl ;
    cout << d.getProtectedData() << endl ; // protected data is accessible by Derived class
    cout << d.getPVTData() << endl ; 
    // cout << d.protectedData << endl ;
    // getPVTData() is public member function, hence accessible in Derived class
    cout << d.getPublicData() << endl ; // public members are accessible from anywhere 
    cout << d.publicData << endl ; // public data members and functions are accessible from anywhere
    cout << "=============" << endl ;

    cout << "Protected Inheritance" << endl ;
    ProtectedDerived prod ;
    
    // cout << prod.publicData << endl ; 
    // cout << prod.getProtectedData << endl ;
    // cout << prod.getPVTData() << endl ;
    // publicData and getPVTData() of base class has become protected now in protected derived class, so cannot be accessed directly

    cout << prod.getProtectedData() << endl ; // public member function of Protected Derived class
    cout << prod.getPublicData() << endl ; // public member function of Protected Derived class
    cout << "==============" << endl ; 


    cout << "Private Inheritance" << endl ;
    PrivateDerived prid ;
    // cout << prid.publicData << endl ;
    // cout << prid.getPVTData() << endl ; 
    // cout << prid.protectedData << endl; 

    cout << prid.getProtectedData() << endl ;
    cout << prid.getPublicData() << endl ;
    cout << "==============" << endl ;



    return 0 ;

}