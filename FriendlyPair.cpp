using namespace std;
#include<iostream>

int friendlyPair(int first, int second)
{
    int sumOne = 0;
    int sumTwo = 0;

    for(int i = 1; i < first; i++)
    {
            if(first % i == 0)
            {
                sumOne = sumOne + i;
            }
    }

    for(int j = 1; j < second; j++)
    {
            if(second % j == 0)
            {
                sumTwo = sumTwo + j;
            }
    }

    if(sumOne == second && sumTwo == first)
    {
        cout << "Friendly pair..";
    }
    else
    {
        cout << "Not a friendly pair..";
    }
    return 0;
}

int main()
{
    int firstNumber = 0;
    int secondNumber = 0;
    cout << "Enter 1st number..";
    cin >> firstNumber;

    cout << "Enter 2nd Number..";
    cin >> secondNumber;
    friendlyPair(firstNumber, secondNumber);
}
