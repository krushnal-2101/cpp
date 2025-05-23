#include<iostream>
using namespace std;


int liniar_search(int arr[], int search)
{
    int index = -1;

    for(int i=0; i<5; i++)
    {
        if(arr[i] == search)
        {
            index = i;
            return index;
        }
    }
    return index;
}




int main()
{
    int size, search;

    cout <<  "size: ";
    cin >> size;

    int arr[size];

    for(int i=0; i<size; i++)
    {
        cout << "arr[" << i << "]: " ;
        cin >> arr[i];  
    }
    
    cout << "search:";
    cin >> search;

    int find = liniar_search(arr, search);

    if(find > 0)
    {
        cout << "ele is found " <<  find <<  endl;
    }
    else{
        cout <<  "ele is not found" <<  endl;
    }

    return  0;
}