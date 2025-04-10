#include<iostream>

using namespace std;


class bank{
    private:

    int balance = 100256;
    int pin = 5814;

    public:

    void setbal(int deposit)
        {
      this->balance = this->balance + deposit;
    }

    void getbal(int pin){
   
        if(this->pin == pin)
        {
            cout << "balance is: " << this->balance <<"/-"<<  endl;
        }
        else
        {
             cout <<  "Enter valid password" <<  endl;
        }

    }
};


int main(){

   bank user1;


   int pin;
   cout <<  "pin:";
   cin >> pin;

   int deposit = 1500;

  
    user1.setbal(deposit);

    user1.getbal(pin);

  return 0;
}