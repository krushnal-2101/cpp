#include<iostream>
using namespace std;


class Engine{

   public:
     char eng1[100] = "v8";
     char eng2[100] = " v12";
     char eng[100] = "turbo";

};

class Wheels{

    public:
      char wheel1[100] = "alloy wheel";
      char wheel2[100] = "aluminium wheel";
      char wheel3[100] = "string wheel"; 
};

class Vehical : public Engine, public  Wheels {
    
    public:
    void spf(){
        cout <<  " vehical has " <<  this->eng1 <<  " with  " <<  this->wheel1 << "---!";
    }
};

int main(){

    Vehical veh1;

    veh1.spf();

    return 0;

}