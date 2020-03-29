#include<iostream>
using namespace std;

int factorial(int number)
{
    int factorialNumber = 1;
    for(int i = number; i >= 1; i --)
    {
        factorialNumber = factorialNumber*i;
    }
    return factorialNumber;
}
int main()
{
    int number = 0;
    int factorialNumber = 1;
    cout<< "Please enter the number to find the factorials";
    cin >> number;
    int factorialNumberOne = factorial(number);
    cout << "factorial for the following number is.." << factorialNumberOne;
}
