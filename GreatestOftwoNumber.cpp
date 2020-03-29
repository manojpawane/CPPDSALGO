#include<iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber;
    cout<< "Enter the first number";
    cin>> firstNumber;
    cout<< "Enter the second Number";
    cin>> secondNumber;
    if(firstNumber == secondNumber)
    {
        cout << "Both Number are equals";
    }
    else if(firstNumber > secondNumber)
    {
        cout<< firstNumber << " number is greater than " << secondNumber;
    }
    else
    {
        cout<< secondNumber << " number is greater than " << firstNumber;
    }
    return 0;
}
