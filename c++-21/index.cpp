#include<iostream>

#include<string.h>

using namespace std;




class student{

    public:
    char name[100];
    int grid;
    int age;
    char cource[100];
    float percantage;
};

int main(){

  student student1,student2,student3,student4,student5;


  strcpy(student1.name, "krushnal");
  student1.grid = 9380;
  student1.age = 21;
  strcpy(student1.cource, "bba");
  student1.percantage = 88.56;

  
  strcpy(student2.name, "jay");
  student2.grid = 7852;
  student2.age = 20;
  strcpy(student2.cource, "bba");
  student2.percantage = 79.89;

  
  strcpy(student3.name, "mit");
  student3.grid = 8895;
  student3.age = 21;
  strcpy(student3.cource, "ba");
  student3.percantage = 74.85;
  
  
  strcpy(student4.name, "amit");
  student4.grid = 1025;
  student4.age = 21;
  strcpy(student4.cource, "bca");
  student4.percantage = 80.25;

  
  strcpy(student5.name, "kartik");
  student5.grid = 8956;
  student5.age = 21;
  strcpy(student5.cource, "b.com");
  student5.percantage = 78.56;
   
  cout << "------------------------------"<< endl;

  

  cout << "Name: " << student1.name << endl;  
  cout <<  "Grid: " << student1.grid << endl;  
  cout <<  "Age: " << student1.age << endl;  
  cout <<  "Cource: " << student1.cource << endl;  
  cout << "Per: " << student1.percantage << endl;  


  cout << "------------------------------"<< endl;
  

  cout << "Name: " << student2.name << endl;  
  cout <<  "Grid: " << student2.grid << endl;  
  cout <<  "Age: " << student2.age << endl;  
  cout <<  "Cource: " << student2.cource << endl;  
  cout << "Per: " << student2.percantage << endl;  

  cout << "------------------------------"<< endl;

  
  cout << "Name: " << student3.name << endl;  
  cout <<  "Grid: " << student3.grid << endl;  
  cout <<  "Age: " << student3.age << endl;  
  cout <<  "Cource: " << student3.cource << endl;  
  cout << "Per: " << student3.percantage << endl;  

  cout << "------------------------------"<< endl;

  
  cout << "Name: " << student4.name << endl;  
  cout <<  "Grid: " << student4.grid << endl;  
  cout <<  "Age: " << student4.age << endl;  
  cout <<  "Cource: " << student4.cource << endl;  
  cout << "Per: " << student4.percantage << endl;  

  cout << "------------------------------"<< endl;

  
  cout << "Name: " << student5.name << endl;  
  cout <<  "Grid: " << student5.grid << endl;  
  cout <<  "Age: " << student5.age << endl;  
  cout <<  "Cource: " << student5.cource << endl;  
  cout << "Per: " << student5.percantage << endl;  
  
  cout << "------------------------------"<< endl;

  
  return 0;
}