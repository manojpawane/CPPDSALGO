#include<iostream>
using namespace std;

int main()
{
    cout<< "Please enter number to check whether is positive or negative: ";
    int check;
    cint >>check;

    if(check == 0)
    {
        cout<< "Number is not a negative or positive";
    }
    else if(check > 0)
    {
        cout<<check <<" Number is positive";
    }
    else
    {
        cout<<check <<" Number is negative";
    }
    return 0;
}
