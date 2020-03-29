#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter number to check whether it is even or odd";
    int check;
    cin>>check;

    if(check == 0)
    {
       cout << "Please enter valid number";
    }
    else if(check % 2 == 0)
    {
        cout<<check<<" is even Number" ;
    }
    else
    {
        cout<<check << " is odd number";
    }
    return 0;
}
