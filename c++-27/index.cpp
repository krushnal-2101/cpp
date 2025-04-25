#include<iostream>
using namespace std;

class flower{

    public:

    virtual void rose()= 0;
    virtual void galgoto()= 0;
    virtual int sunflower()= 0;
};

class flowerpart : public  flower{
  
    public:
    void rose(){
        cout << "this is rose flower" <<  endl;
    }

    void galgoto(){
        cout <<  "this is galgoto flower" << endl;
    }
   int sunflower(){
        cout <<  "this is sunflower flower" << endl;
        return 456 ;
    }
};




int main(){

    flowerpart ro1, ga1, su1;

    ro1.rose();
    ga1.galgoto();
    su1.sunflower();



    return 0;
}