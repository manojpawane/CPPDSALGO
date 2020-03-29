#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<< "Enter the number to find factors";
    cin>> number;
    for(int i = 1; i <= number; i++)
    {
        if(number % i == 0)
        {
            cout<< i << endl;
        }
    }
}
