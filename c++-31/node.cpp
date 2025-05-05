#include<iostream>
using namespace std;


class node{

    public:

    int data;
    node *next;

};



int main(){

    int n = 10;
    n = 20;


    n=30;
    char a = 'a';
    double d = 2.43;
    node obj;
    obj.data = 20;
    obj.next = NULL;


    int *n1 = new int(20);
    n1 = new int(20);
    n1 = new int(300);
    char *a1 = new char('a');
    float *d1 = new float(5682);
    node *obj1 = new node();
    obj1->data = 50;
    obj1->next = NULL;




   return 0;
}