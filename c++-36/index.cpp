#include<iostream>
using namespace std;


void bubble(int arr[], int n);
void display(int arr[], int n);

int main(){
     
    int n ;
    cout <<  "size:";
    cin >>  n;

    int arr[n];

    for(int i=0; i<n; i++)
    {
        cout <<  "arr[" <<  i << "]:" ;
        cin >> arr[i];
    }

    display(arr, n);

    bubble(arr, n);


  


    return 0;
    
}


void bubble(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
       for(int j=0; j<n; j++)
       {
         if(arr[j] > arr[j+i])
        {
            int x = arr[j];
            arr[j] = arr[j+1];
            arr[j+i] = x;
        }
       }
    }
    display(arr, n);
}

void display(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout <<  arr[i] << " ";
    }
    cout <<  endl;
}