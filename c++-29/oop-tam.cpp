#include<iostream>
using namespace std;


template <typename T1, typename T2>

class cal{

    public:

    cal(T1 x , T2 y){
        cout <<  x+y <<  endl;
    }
};

int main(){


    cal<double, double> obj1(53.2, 5.3);


    return 0;
}