#include<iostream>
using namespace std;
int main()
{
    int number = 0;
    cout<<"Enter Decimal Number..";
    cin>> number;
    int temp = number;
    int OctalNumber = 0;
    int remainder = 0;
    int i = 1;
    while(number != 0)
    {
        remainder = number % 8;
        OctalNumber = OctalNumber + remainder * i;
        i = i * 10;
        number = number / 8;
    }
    cout<<"Octal of Decimal Number" << " " << temp << " is " << OctalNumber;
}
