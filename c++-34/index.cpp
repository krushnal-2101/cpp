#include<iostream>
#include<string>
using namespace std;

void ispalendrome(){
    string str;

    cin >> str;

    string newstr;

    for(int i=str.size()-1; i>-0;i--)
    {
        newstr = newstr + str[i];
    }
    if(str == newstr)
    {
        cout <<  "is palendrome" <<  endl;
    }
    else{
        cout <<  "not palendrome" <<  endl;
    }
};

string ispalendrome2()
{
    string str;

    cin >> str;

    int i=0;
    int j = str.size()-1;

    while(i<str.size() && j>=0)
    {
        if(str[i]==str[j])
        {
            i++;
            j--;
            continue;
        }
        else{
            return "not palendrome";
        }
    }
    return "palendrome";
}


int main()
{
cout << ispalendrome2();
return 0;
}
