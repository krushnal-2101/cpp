#include<iostream>
#include<string.h>
using namespace std;


class animal{

    public:
    char name[100];
    char breed[100];
    int age ;
    char type[100];


    animal(){
        strcpy(this->name, "-");
        strcpy(this->breed, "-");
        this->age = 0;
        strcpy(this->type, "dog");
        cout <<  "dogieeeeee" <<  endl;
    }

    animal(char n[])
    {
        strcpy(this->type, n);
    }

};


int main(){

     animal dog1,cheetah("run"),lion("king"),whale("fish");

     int a=100;

     cout <<  dog1.type <<  endl;
     cout <<  cheetah.type <<  endl;
     cout <<  lion.type <<  endl;
     cout << whale.type <<  endl;  

    return 0;
}