#include<iostream>

using namespace std;

int main(){
    

    for(int j=1; j<=10; j++)
    {
        cout << j  << " " << endl;
    }

    for(int j=1; j<=20; j++)
    {
        if(j%2==0)
        {
            cout << "*" << " " ;
        }
        else{
            cout << "#" << " " ;
        }
    }

 
    return 0;
}