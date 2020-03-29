#include<iostream>
using namespace std;
int main()
{
    int number, rem, reverse = 0;
    cout<< "Enter number to check whether it is palindrome..";
    cin >>  number;
    int temp = number;
    while(number != 0)
    {
        rem = number % 10;
        reverse = reverse * 10 + rem;
        number = number/10;
    }
    if(reverse == temp)
    {
        cout<< "Palindrome";
    }
    else
    {
        cout<< "Not Palindrome";
    }
}
