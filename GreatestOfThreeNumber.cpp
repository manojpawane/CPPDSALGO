#include<iostream>
using namespace std;
int main()
{
    int firstNumber, secondNumber, thirdNumber = 0;
    cout << "Enter the first number..";
    cin >> firstNumber;

    cout<< "Enter the second Number..";
    cin >> secondNumber;

    cout << "Enter the third Number..";
    cin >> thirdNumber;

    if(firstNumber && secondNumber == thirdNumber)
    {
        cout<< "All number are equal";
    }
    else if(firstNumber > secondNumber && firstNumber > thirdNumber)
    {
        cout<< firstNumber << "  is greater";
    }
    else if(secondNumber > firstNumber && secondNumber > thirdNumber)
    {
        cout<< secondNumber << " is  a greater number";
    }
    else
    {
        cout<< thirdNumber << " is a greater number";
    }
    return 0;
}
