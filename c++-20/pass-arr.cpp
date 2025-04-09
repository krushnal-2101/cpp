#include<iostream>

using namespace std;



void addition(int a[]){
    
    int sum = 0;
    for(int i=0; i<5; i++)
    {
        sum = sum + a[i];
    }
}

void change(int z)
{
    cout <<  z << endl;
}

int main(){

    int arr[5] = {11, 12, 13, 14, 15};

    int z =100;

    change(z);
    addition(arr);

    return 0;
}