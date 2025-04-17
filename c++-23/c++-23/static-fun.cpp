#include<iostream>
#include<string.h>

using namespace std;



class cars{

    public:
    char brand[100];
    char model[100];
    static char type1[100];
    static char type2[100];


    static getmodel(){
        cout <<  type <<  endl;
    }

};


char cars::type1[100] = "hillrace";
char cars::type2[100] = "faster";


int main(){


    cars car1,car2,car3;

    strcpy(car1.brand,"mahindra");
    strcpy(car1.model,"thar");


    strcpy(car2.brand,"tata");
    strcpy(car2.model,"safari");


    strcpy(car3.brand,"Lamborghini");
    strcpy(car3.model,"Aventador LP");

    cars::getmodel();

    // cout <<  car1.brand << "  " << car1.model <<  "  " <<  cars::type1 <<  endl;
    // cout <<  car2.brand <<  " " <<  car2.model <<  " " <<  cars::type1 <<  endl;
    // cout <<  car3.brand <<  " " << car3.model <<  " " <<  cars::type2 <<  endl;
    
  



    return 0;
}