#include<iostream>
using namespace std;


class Node{

    public:

    int data;
    Node *next;
};


int main(){

    Node *HEAD = new Node();
     
    HEAD->data = 15;
    HEAD->next = NULL;
    Node *current = new Node();

    current->data = 25;
    current->next = NULL;
    HEAD->next = current;

    current = new Node();
    current->data = 30;
    current->next = NULL;
    HEAD->next->next = current;

    current = new Node();
    current->data = 40;
    current->next = NULL;
    HEAD->next->next->next = current;   



    Node *ptr = HEAD;

    while (ptr != NULL){

        cout << "D:" <<  ptr->data << " A:" << ptr->next <<  endl;
        ptr = ptr->next;
    }

    return 0;
}