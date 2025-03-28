#include<iostream>

using namespace std;

void sum(){

        int num = 20;
        int sum = 0;

        for(int i=1; i<=20; i++)
        {
            sum = sum + i;
        }
        cout << sum;
}


int main(){

    sum();

    return 0;
}