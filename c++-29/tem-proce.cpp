#include<iostream>
using namespace std;


template <typename T>

class Store {

    int size;
    int *arr;

    public:

    Store(T size){
      this->size = size;
      arr = new T[this->size];

      if(arr == NULL)
      {
        cout << "memory allocation successs" << endl;
      }
      else{
            cout <<  "memory allocation unsuccess" <<  endl;
      }
    }

    ~Store(){
        delete[] arr;
        arr = NULL;

        if(arr  == NULL)
        {
                cout <<  "memory deallocation  success" <<  endl;
        }
        else{
            cout <<  "memory dealloacation unsuccess" <<  endl;
        }
    }

    void addElements(T index, T ele)
    {
        arr[index] = ele;
    }

    void showElement(){
        for(T i=0; i<size; i++)
        {
            cout <<  arr[i] << ", ";
        }
        cout <<  endl;
    }
    


};












int main(){

    Store <int> obj1(5);
    Store <int> obj2(4);



    obj1.addElements(0, 99);
    obj1.addElements(1, 88);
    obj1.addElements(3, 77);
    obj1.addElements(4, 66);


    obj1.showElement();    
    obj2.showElement();    

    return 0;
}