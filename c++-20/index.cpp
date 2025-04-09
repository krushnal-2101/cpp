#include<iostream>

using namespace std;

int main(){

    int a = 10;
    int b = a;
    
    a = 100 ;

    cout <<  a <<  endl;
    cout <<  b <<  endl;

    
    int x = 50;
    int &y = x;

    x = 70;

    cout  << x << endl;
    cout  << y << endl;



    return 0;
}