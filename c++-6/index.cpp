#include<iostream>
using namespace std;


int main(){

    int marks;
    cout << "enter  your marks:";
    cin >> marks;
    char grade;

 cout << "-------------------------" <<  endl;

    if(marks > 85)
    {
        cout << "your grade is A " << endl;
        grade='A';
    }
    else if(marks > 75)
    {
        cout << "your grade is B " << endl;
        grade='B';
    }
   else if(marks > 65)
    {
        cout << "your grade is C" << endl;
        grade='C';
    }
    else if(marks > 55)
    {
        cout << "your grade is D" << endl;
        grade='D';
    }
    else if(marks > 45)
    {
        cout << "your grade is E" << endl;
        grade='E';
    }
    else
    {
        cout << "check your input" << endl;
       
    }
    cout << "-------------------------" <<  endl;

    switch(grade)
    {
       case 'A' : cout << "super execelent" << endl;
          break;
       case 'B' : cout << "execenlent" << endl;
          break;
       case 'C' : cout << "super" << endl;
          break;
       case 'D' : cout << "good" << endl;
          break;
       case 'E':cout << "normal pass " << endl;
           break;
        default : cout << "better luck next time...! " << endl;
    }

    cout << "-------------------------" <<  endl;

    return 0;
}