#include<iostream>
using namespace std;

int main()
{
    
    cout << "press 1 for toyota" << endl;
    cout << "press 2 for mahindra" << endl;
    cout << "press 3 for suzuki" << endl;

    int type;
    int choice;
    cout << "enter choice ";
    cin >> choice;


    if(choice==1)
    {
        cout << "press 1 for innova" << endl;
        cout << "press 2 for fortuner" << endl;
        cout << "press 3 for avanza" << endl;
        cout << "press 4 for aqua" << endl;
        cout << "enter type: ";
        cin >> type;

        if(type== 1)
        {
           cout << "your ordered for innova" << endl;
        }

       else if(type== 2)
        {
           cout << "your ordered for fortuner" << endl;
        }
       else if(type== 3)
        {
           cout << "your ordered for avanza" << endl;
        }
       else if(type== 4)
        {
           cout << "your ordered aqua" << endl;
        }
       else 
        {
           cout << "this is not available" << endl;
        }
    }
    if(choice==2)
    {
        cout << "press 1 for scropio" << endl;
        cout << "press 2 for xuv" << endl;
        cout << "press 3 for thar" << endl;
        cout << "press 4 for suv" << endl;
        cout << "enter type: ";
        cin >> type;

        if(type== 1)
        {
           cout << "your ordered for scropio" << endl;
        }

       else if(type== 2)
        {
           cout << "your ordered for xuv" << endl;
        }
       else if(type== 3)
        {
           cout << "your ordered for thar" << endl;
        }
       else if(type== 4)
        {
           cout << "your ordered suv" << endl;
        }
       else 
        {
           cout << "this is not available" << endl;
        }
    }
    if(choice==3)
    {
        cout << "press 1 for swift" << endl;
        cout << "press 2 for jimny" << endl;
        cout << "press 3 for ertiga" << endl;
        cout << "press 4 for ignis" << endl;
        cout << "enter type: ";
        cin >> type;

        if(type== 1)
        {
           cout << "your ordered for swift" << endl;
        }

       else if(type== 2)
        {
           cout << "your ordered for jimny" << endl;
        }
       else if(type== 3)
        {
           cout << "your ordered for ertiga" << endl;
        }
       else if(type== 4)
        {
           cout << "your ordered ignis" << endl;
        }
       else 
        {
           cout << "this is not available" << endl;
        }
    }
}