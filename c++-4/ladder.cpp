#include<iostream>

using namespace std;


int main()
{
    
    cout << "press 1 for thar" <<  endl;
    cout << "press 2 for swift" <<  endl;
    cout << "press 3 for innova" <<  endl;

    int choice;
    cout << "enter choice" << endl;
    cin >> choice;


    if(choice == 1)
    {
      cout << "your ordered thar" << endl;    
    }
    else if(choice == 2)
    {
      cout << "your ordered swift" << endl;    
    }
    else  if(choice == 3)
    {
      cout << "your ordered innova" << endl;    
    }
    else{
      cout << "please valid choice...!" << endl;    
    }


    return 0;

}