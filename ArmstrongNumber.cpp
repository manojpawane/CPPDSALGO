#include<iostream>
using namespace std;
int main()
{
    int number, remainder = 0;
    int sum = 0;
    cout<<"Enter the number..";
    cin >> number;
    int temp = number;
    while(number!=0)
    {
        remainder = number % 10;
        sum = sum + (remainder * remainder * remainder);
        number = number / 10;
    }

    if(sum == temp)
    {
        cout<< "Armstrong number..";
    }
    else
    {
        cout<<"Not a Armstrong number";
    }
}
