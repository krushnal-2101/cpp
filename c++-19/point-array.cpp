#include<iostream>

using  namespace std;

int main(){
    
    int a= 10;

    int *ptr = &a;

    cout <<  *ptr << endl;

  int arr[5] = {11, 12, 13, 14, 15};

  int *ptrarr[5];

  for(int i=0; i<5; i++)
  {
     ptrarr[i]=&arr[i];
  }


  for(int i=0; i<5; i++)
  {
    cout <<  ptrarr[i] <<  "== " << *ptrarr[i] <<  endl;
  }
    return 0;
}   