#include<iostream>
using namespace  std;

class Node{

    public:

    int data;
    Node *next;
};

class Linkedlist{
    
    public:
    Node *HEAD; 
    int size;

    Linkedlist(){
        this->HEAD=NULL;
        this->size=0;
    }

    void addstartnode(int ele){
        Node *newNode = new Node(); 
        newNode->data = ele;
        newNode->next = this->HEAD;
        this->HEAD = newNode;
    }


    void printlist(){

        Node *ptr = this->HEAD;
        while(ptr !=NULL)
        {
           cout <<  " -> " <<  ptr->data;
           ptr = ptr->next; 
        }
          cout << endl;
       
    }
};




int main(){

    Linkedlist list;

    cout << "press 1 for begining......! " << endl;
    cout << "press 2 for end......! " << endl;
    cout << "press 3 for position......! " << endl;

   int choice, ele, pos;    


   while(choice!=0)
   {
     cout <<  "choice:";
     cin >>  choice;    

    switch(choice)
    {
       case 1:        
              cout <<  "ele:";
              cin >> ele;
              list.addstartnode(ele);       
            break;
 
       case 2:        
              cout << "ele:";
              cin >>  ele;
            break;
 
 
 
       case 3:        
           
            break;
 
 
       case 4:        
               list.printlist();
            break;
 
            
        default:
        
             break;  
     
 
    }
   }
  


    return 0;
}