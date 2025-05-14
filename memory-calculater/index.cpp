#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

template <typename T>

class student{

    public:
    T id;
    string name;

    student(T id, char name)
    {
      this->id = id;
      this->name = name;
    }

    void show()
    { 
        cout <<  "id:" <<  id <<  "Name:" <<  name <<  endl;
    }
}


int main
{
    student std(1,"jay"), std(2,"jay");
  
    vector<student<int>> list;

    int choice;
   cout << "choice:";
   cin >>  choice;


    list.push_back(1,"jay");
    list.push_back(2,"mit");

//    .show();

 while(choice != 0){
      cout << "-------------------------" <<  endl;
      cout <<  "add student" <<  endl;
      cout <<  "display list" <<  endl;
      cout <<  "remove student" <<  endl;
      cout <<  "search student" <<  endl;


switch(choice)
{

  case 1: 
          
        break;

  case 1:

        break;

  case 1: 

        break;

  case 1: 

        break;
        
  default: 
  
        break;

}
 }


    
   return 0;
}