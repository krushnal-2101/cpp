#include<iostream>
using namespace std;



class A {

    public:

    void atop(){
        cout <<  "this is top  A"  << endl;
    }
};

class B : public A{

    public:
    void bside(){
        cout <<  "this is side B" <<  endl;
    }
};

class C : public A {
    
    public:
    void cside(){
        cout <<  "this is side C" <<  endl;
    }
};

class D : public B,  public C{

    public:
    void dbottom(){
        cout <<  "this is bottom D " << endl;
    }
};

int main(){

    D d1;

    d1.dbottom();
    d1.cside();
    d1.bside();

    d1.B::atop();




    return 0;
}







