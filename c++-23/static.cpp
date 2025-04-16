#include<iostream>
#include<string.h>
using namespace std;


class mentor{

    public:
    int id;
    char post[10];
    static int courcecode;
};

class student{

    public:
    int grid;
    char name[10];  
    static int courcecode;
};

int student::courcecode = 4520;
int mentor::courcecode = 456;

int main(){

    student st1,st2;

    st1.grid = 45;
    strcpy(st1.name, "krushnal");

    st2.grid = 55;
    strcpy(st2.name, "jay");

    cout <<  st1.grid <<  "  " <<  st1.name <<  "  " <<  student::courcecode<<  endl;
    cout <<  st2.grid <<  "  " <<  st2.name <<  "  " <<  mentor::courcecode<<  endl;

    return 0;

}