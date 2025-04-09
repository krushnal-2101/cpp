#include<iostream>

using namespace std;






void square(int n)
{
    cout << n*n <<  endl;
}

void cube(int *ptr){
    cout <<  ptr << " " <<  *ptr <<  endl;
}

void sum(int &n){
  cout <<  n+n <<  endl;
}
int main(){

   int num = 20;

   int *ptr = &num;

   int &ref = num;

   square(20);  // pass by value//

   square(num);   // pass by variable//

   cube(ptr);   // pass by pointer//

   cube(&num);    // pass by  address//

   sum(ref);     // pass by refrences//
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
   return 0;


}