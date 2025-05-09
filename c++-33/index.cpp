#include<iostream>
using namespace std;

class Stack{

    public:
    int size;
    int capacity;
    int top;
    int *arr;


  Stack(int capacity){
        this->capacity = capacity;
        this->arr  = new int[this->capacity];
        this->top = -1;
        this->size = 0;
    }

  ~Stack(){
    delete[] arr;
    arr = NULL;
    cout <<  "-*-*-*-*-*-*-*-*-*-*-*-" <<  endl;
  }



    void push(int ele){
        if(this->size >  this->capacity-1)
        {
            cout <<  "stack is full------!" <<  endl;
            return;
        }
        this->top++;
        arr[this->top] = ele;   
        this->size++;
    }

    void pop(){
        if(this->top < 0)
        {
            cout << "stack is empty" <<  endl;
            return;
        }
        this->top--;
        this->size--;   
    }

    void peak(){
        cout << "|" <<  arr[this->top] << "|" <<  endl;
    }

    void empty(){
        if(this->top <  0){
            cout << " epmty  - true" <<  endl;
        }
        else{
            cout <<  "empty - false" <<  endl;
        }
        }
    
    
    void full(){
         if(this->size > capacity-1){
            cout << " full - true" <<  endl;
            
            cout <<  "full - false" <<  endl;
        }
        }
    

    void size1(){
        cout <<  "size:" <<  this->size <<  endl;   
    }

    void display(){

        for(int i=size; i>=0; i--)
        {
            cout <<  "|" <<  arr[i] <<  "|" <<  endl;
        }
        cout << "---------" <<  endl;
    };



};


int main(){



int choice, ele, capacity;

cout <<  "stack size:";
cin >>  capacity;

 Stack st(capacity);

 while(choice != 0 )
 {
    cout <<  "*************************************" <<  endl;
     cout <<  "press 1 for push " <<   endl;
     cout <<   "press 2 for pop " <<    endl;
     cout << "press 3 for peak " <<   endl;
     cout <<  "press 4 for empty " <<  endl;
     cout <<  "press 5 for full " <<   endl;
     cout <<  "press 6 for size " <<   endl;
     cout <<  "press 7 for show " <<   endl;

 cout << " choice:";
 cin >>  choice;  


    switch (choice)
    {
    case 1: 
            cout << "ele:";
            cin >>  ele;
           st.push(ele);
       break;
    case 2: 
           st.pop();
       break;
    case 3: 
           st.peak();
       break;
    case 4: 
           st.empty();
       break;
    case 5: 
           st.full();
       break;
    case 6: 
           st.size1();
       break;
    case 7: 
           st.display();
       break;

       default:

       break;

    }
 }
    return 0;
}