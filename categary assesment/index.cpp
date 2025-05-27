#include<iostream>
using namespace std;

void print_array(int arr[], int n){
for(int i=0; i<n; i++)
{
    cout <<  arr[i] << " ";
}
    cout <<  endl;
}


void selection(int arr[], int n)
{
   
    for(int i=0; i<n-1; i++ )
    {
        int min_index = i;

        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index = j;
            }
        }

        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }

    print_array(arr, n);
}





int main()
{


    int choice, size, ele ;

    cout << "size: ";
    cin >>  size;

    int arr[size];

    for(int i=0; i<size; i++)
    {
        cout << "arr[" << i << "]: " << endl;
        cin >> arr[i];
    }
    

while(choice != 0)
{
  
    cout << "selection short" <<  endl;
    cout <<  "merge short" <<  endl;
    cout <<  "linear search" <<  endl;
    cout << "binary search" <<  endl;

    cout <<  "choice:";
    cin >>  choice;

    switch(choice)
    {
    case 1:
           
            cout <<  "ele: ";
            cin >>  ele;
          selection(arr, n);
          break;
    case 2:
           
 
          break;
    case 3:
           
 
          break;

    case 4:
           
            
          break;

   default:

    break;
}

}

return 0;
}