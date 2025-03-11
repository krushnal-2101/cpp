#include<iostream>

using namespace std;


int main(){


//     // q-1


    char l = 'a';

  do
  {
    cout << l <<  " ";
    l = l+4;
  }
  while(l<='z');







//   q-2

  int i = 45576;

  int num_digit = 0;

  while(i>0){

    i = i/10;

    num_digit++;
  }

  cout << num_digit <<endl;




// q-3

int num = 34657;

int last_digit = num%10;

int first_digit = 0;


while(num > 10){

    num =  num/10;

        first_digit = num;
}

 int sum = first_digit+last_digit;

 cout <<  sum <<  endl; 

 
    return 0;
}