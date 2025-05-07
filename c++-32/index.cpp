#include<iostream>
using namespace  std;

class Node{

    public:

    int data;
    Node *next;
    


    Node(int ele){
        this->data = ele;
        this->next = NULL;
    }

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
        Node *newNode = new Node(ele); 
        newNode->next = this->HEAD;
        this->HEAD = newNode;
        this->size++;
    }

    void addendnode(int ele)
    {
        Node *newNode = new Node(ele);
        this->size++;
        if(this->HEAD = NULL)
        {
            newNode->next = this->HEAD;
            this->HEAD = newNode;
        }
        else
        {
            Node *ptr = this->HEAD;
            while(ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = newNode;
        }

    }

    void addposnode(int ele, int pos)
    {
        if(pos < 0 || pos > this->size)
        {
            cout << "invalid position--------!" <<  endl;
        }
        else
        {
            Node *newNode = new Node(ele);
            this->size++;
            if(this->HEAD == NULL)
            {
                newNode->next = this->HEAD;
                this->HEAD = newNode;   
            }
            else{
                Node *ptr = this->HEAD;
                for(int i=0; i< pos-1; i++)
                {
                    ptr = ptr->next;
                }
               newNode->next = ptr->next;
               ptr->next = newNode;
            }
        }

    }

    void updateNode(int pos, int ele)
    {
        if(pos < 0 || pos >  this->size)
        {
            cout << "invalid position -------!" <<  endl;
        }

        else{
            Node *ptr = this->HEAD;
            for(int i=0; i<pos; i++)
            {
                ptr = ptr->next;
            }
            ptr->data = ele;
        }
    }


    void delstartNode(){
        Node *ptr = this->HEAD;
        this->HEAD=ptr->next;
        ptr = NULL;
        this->size--;
    }

    void delendNode(){
        Node *ptr = this->HEAD;
        while(ptr !=NULL)
        {
            cout << "->" << ptr->data;
            ptr = ptr->next;
        }
        ptr->next =NULL;
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
    cout << "press 4 for print......! " << endl;
    cout << "press 5 for update......! " << endl;
    cout << "press 6 for delstart......! " << endl;
    cout << "press 7 for delend......! " << endl;

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
              list.addendnode(ele);
            break;
 
       case 3:        
           cout <<  "pos:";
           cin >> pos;
           cout <<  "ele:";
           cin >>  ele;
           list.addposnode(pos, ele);
            break;
 
       case 4:        
               list.printlist();
            break;

       case 5:        
             cout <<  "pos:";
             cin >>  pos;
             cout << "ele:";
             cin >>  ele;
             list.updateNode(pos, ele);
            break;

       case 6:        
               list.delstartNode();
            break;
      
       case 7:        
               list.delendNode();
            break;
      
        default:
        
             break;  
        
    }
   }
  


    return 0;
}