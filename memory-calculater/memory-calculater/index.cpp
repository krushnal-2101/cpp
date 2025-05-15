#include<iostream>
#include<string>
#include<vector>
using namespace std;

// template <typename T>

class student{

    public:
    int id;
    string name;

    student(int id, string name)
    {
      this->id = id;
      this->name = name;
    }
};

class Studentlist{

      public:

       vector<student> list;
      
       void add(int id ,string name)
       {
             student st(id, name);
              list.push_back(st);
       }

       void display(){
            for(student s : list)
            {
                  cout <<  "ID:" << s.id <<  " "<<  "NAME:" <<  s.name <<  endl;
            }
       }

       void search(int id ){
        for(student s : list)
            {
                if(s.id == id)
                {
                    cout <<  "student on ID:" << " "<< id <<  "NAME:" <<  s.name <<  endl;
                }
            }
      }

       void erase(int id)
      {
         cout << "Enter ID to remove: ";
         cin >> id;
           for(student s : list)
           {
             if(s.id == id)
             {
              list.erase();
                  cout << "Student removed successfully." << endl;
             }
           }
      }
};

int main()
{

    int choice, id;     
    string name;

 
      Studentlist list;

 while(choice != 0){

        cout << "choice:";
        cin >>  choice; 

switch(choice)
{

  case 1: cout << "id:";
          cin >>  id;
          cout <<  "name:";
          cin >>  name;
          list.add(id, name);
        break;

  case 2:
            list.display();
        break;

  case 3: 
      cout << "id:";
      cin >>  id;
      list.search(id);
        break;

  case 4: 
        cout <<  " Enter id to remove:"
        cin >>id;
        list.erase(id);
        break;

  default: 
        cout << "invalid choice----!" ;
        break;

}
 }        


    
   return 0;
}