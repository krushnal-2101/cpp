#include<iostream>

using namespace std;




void sum(){
    int first,second;
    cout << "first number:";
    cin >> first;
    cout <<  "second number:";
    cin >>  second;
    cout << "sum of "<< first <<  " and " <<  second << " is " <<  first+second <<  endl;    
}
void sub(){
    int first,second;
    cout << "first number:";
    cin >> first;
    cout <<  "second number:";
    cin >>  second;
    cout << "sub of "<< first <<  " and " <<  second << " is " <<   first-second  <<  endl;     
}
void multi(){
    int first,second;
    cout << "first number:";
    cin >> first;
    cout <<  "second number:";
    cin >>  second;
    cout << "multipication of "<< first <<  " and " <<  second << " is " <<  first*second  <<  endl;   
}
void devid(){
    int first,second;
    cout << "first number:";
    cin >> first;
    cout <<  "second number:" ;
    cin >>  second;
    cout << "devidation of "<< first <<  " and " <<  second << " is " <<   first/second  <<  endl;     
}
void modul(){
    int first,second;
    cout << "first number:";
    cin >> first;
    cout <<  "second number:" ;
    cin >>  second;
    cout << "modulase of "<< first <<  " and " <<  second << " is " <<   first%second  <<  endl;     
}

int main() {

    int choice,first,second;
    while (choice != 0){
    
     
      
        cout << "PRESS 1 FOR +" << endl;
        cout << "PRESS 2 FOR -" << endl;
        cout << "PRESS 3 FOR *" << endl;
        cout << "PRESS 4 FOR /" << endl;
        cout << "PRESS 5 FOR %" << endl;
    
        cout <<  "enter your choice:";
        cin  >> choice;
    
    
    
        switch(choice){
            
            case 1:
                sum();
               
                break;   
                
                
            case 2:
                sub();
                break; 
                
                

            case 3:
               multi();
                break; 
                
                
            case 4:
                 devid();
                break;    
                
                
            case 5:
                  modul();
                break;    


                default:
                break;
        }

}


return 0;

 
}