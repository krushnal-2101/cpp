#include<iostream>

using namespace std;


int main(){


    
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++){
            
            cout << i << " " ;
        }
        cout <<  endl;
    }

    cout <<  endl;

    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++){
            
            cout << j << " " ;
        }
        cout <<  endl;
    }


    cout << endl;


    for(int k=5; k>=1; k--){

        for(int l=5; l>=1; l--){
            
            cout << k << " ";
        }
        cout <<  endl;
    }

    cout << endl;

    for(int i=5; i<=1; i--)
    {
        for(int j=5; j<=1; j++){
            
            cout << j << " " ;
        }
        cout <<  endl;
    }


    cout << endl;
 


    return 0;

}