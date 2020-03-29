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

void StrongNumber(int number)
{
    int duplicateNumber = number;
    int temp = 0;
    int sum = 0;
    int factorialOfNumber = 0;
    while(duplicateNumber != 0)
    {
        temp = duplicateNumber % 10;
        factorialOfNumber = factorial(temp);
        sum = sum + factorialOfNumber;
        duplicateNumber = duplicateNumber / 10;
    }
    if(sum == number)
    {
        cout << sum << " is a strong number";
    }
    else
    {
        cout << number << " is not a strong number" << endl ;
    }
}



int main()
{
    int number = 0;
    cout << "Enter the number to check whether it is strong number..";
    cin >> number;
    StrongNumber(number);
}
