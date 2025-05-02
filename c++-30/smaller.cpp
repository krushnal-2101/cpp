#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector  <int> arr = {4, 1, 6, 8, 9, 0, 2, 4, 2, 8, 4, 3, 5, 6, 0, 9};
    vector <int> sm;


    for(int i=1; i<arr.size()-1; i++ )
    {
        if(arr[i] < arr[i-1] && arr[i] < arr[i+1])
        {
            sm.push_back(arr[i]);
        }
    }

    for(int ele : sm)
    {
        cout <<  ele <<  " ";
    }

    return 0;
}