#include<iostream>

using namespace std;


int first(int n){
    return n*n;
}
int cube(int n){
    return n*n;
}

int main(){

    int num=4;

    cout << "power of " << first(num) << endl;
    cout << "power of " << first(20) << endl;
    cout <<  "cube of " << cube(9) <<  endl;
}