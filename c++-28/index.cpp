#include<iostream>
using namespace std;


int main(){

    int *a = new int (10);

    cout << "address:" << a << ",value:" << *a <<  endl;


    delete(a);

    cout <<  "address:" <<  a <<  ",value:" <<  *a <<  endl;

    a=NULL;

    cout <<  "address:" <<  a <<  ",value:" <<  *a <<  endl;


    for(int i=0; i<10; i++){

         cout << "address:" << a << ",value:" << *a <<  endl;
    };

    



    return 0;

}