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

       void removeid()
      {
         int id;
         cout << "Enter ID to remove: ";
         cin >> id;
           for(int i = 0; i <  list.size(); i++)
           {
             if(list[i].id == id)
             {
              list.erase(list.begin() +1);
                  cout << "Student removed successfully." << endl;
                  return;
             }
           }
      }
};

int main()
{

    int choice, id;     
    string name;

 
      Studentlist list;

 while(choice != 0)
 {
      cout <<  "press 1 for add student" <<  endl;
      cout <<  "press 2 for display student list" <<  endl;
      cout <<  "press 3 for remove student id" <<  endl;
      cout <<  "press 4 for search student id" <<  endl;
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
       
        list.removeid();
        break;

  case 4: 
      cout << "id: ";
      cin >>  id;
      list.search(id);
        break;

 
  default: 
        cout << "invalid choice----!" ;
        break;

}
 }        


    
   return 0;
}