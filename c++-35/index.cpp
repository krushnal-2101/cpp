#include<iostream>
using namespace std;


class Queue
{
    public:
     int *arr;
    int capacity;
    int rear;
    int front;
    int size;
   

Queue(int capacity)
{
    this->capacity = capacity;
    arr= new int[this->capacity];
    this->front = -1;
    this->rear = -1;
    this-> size = 0;
}

~Queue(){
    delete [] arr;
    arr = NULL;
}


void enque(int ele){
    if(this->rear >= this->capacity-1)
    {
        cout <<  "queue is overflow---!" <<  endl;
    }
    else if(this->rear== -1 && this->front== -1)
    {
        this->front = 0;
        this->rear = 0;
        arr[this->rear] = ele;
        this->size++;
    }
    else
    {
        this->rear++;
        arr[this->rear] = ele;
        this->size++;   
    }

}

void deque(){
    if(this->front == -1)
    {
        cout <<  "deque is underflow" << endl;
    }
    else if(this->front == this->rear)
    {
        this->rear = -1;
        this->front = -1;
        this->size--;
    }
    else{
        this->front++;
        this->size--;
    }
}

void front1(){
    if(this->front == -1){
        cout <<  "queue is empty---!" <<  endl;
    }
    cout << "front:" << arr[this->front] <<  endl;
}

void rear1(){
    if(this->rear == -1) 
    {
        cout <<  "queue is empty---!" << endl;
    }
    cout <<  "rear:" <<  arr[this->rear] <<  endl;
}

void isempty(){
    if(this->rear == -1 && this->front == -1)
    {
        cout << " queue is  empty" <<  endl;
    }
    else{
        cout <<  "  queue is not empty" <<  endl;
    }
}

void isfull(){
     if(this->rear >= this->capacity -1)
    {
        cout << " queue is  full" <<  endl;
    }
    else{
        cout <<  "  queue is not full" <<  endl;
    }
}

void display(){
    cout << "-----------------------" <<  endl;

    for(int i=this->front; i<=this->rear; i++)
    {
        cout <<  arr[i] <<  " ";
    }
    cout <<  endl <<  endl;
}

void size1(){
    cout << " queue size:" <<  this->size <<  endl;
}

};

int main(){
   
    int choice, ele;

  Queue list(5);


  while(choice != 0)
  {
    cout <<  "-----------------------------" <<  endl;
    cout << "press 1 for enque" <<  endl;
    cout << "press 2 for deque" << endl;
    cout << "press 3 for front" << endl;
    cout << "press 4 for rear" << endl;
    cout << "press 5 for isempty" << endl;
    cout << "press 6 for isfull" << endl;
    cout << "press 7 for display" << endl;
    cout << "press 8 for size" << endl;

    cout <<  "choice:";
    cin >>  choice;

    switch(choice)
    {
     case 1: 
        cout <<  "ele: ";
        cin >>  ele;
        list.enque(ele);
        break;
    case 2:
        list.deque();
        break;
    case 3:
        list.front1();
        break;
    case 4:
        list.rear1();
        break;
    case 5:
        list.isempty();
        break;
    case 6:
        list.isfull();
        break;
    case 7:
        list.display();
        break;
    case 8:
        list.size1();
        break;
    default:
         cout << "invalid choice " <<  endl;
        break;
    }
}
}