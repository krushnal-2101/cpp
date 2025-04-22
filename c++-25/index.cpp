#include<iostream>
#include<string.h>
using namespace std;



class Animal{
    public:
        int eat = 20;
        int sleep = 7;
};


class dog : public Animal{
    public:
    int eat = 40;
    void method(){
        cout << "dog is eating " << Animal::eat <<  "gram" <<  endl;
    }
};

class bulldog : public dog{

};



int main(){

dog dog1;

dog1.method();

return 0;

}