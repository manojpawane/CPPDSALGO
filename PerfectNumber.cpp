#include<iostream>
using namespace std;
int main()
{
    int number = 0;
    int sum = 0;
    cout << "Enter the number to check whether it is perfect or not..";
    cin >> number;
    for(int i = 1; i < number; i++)
    {
        if(number % i == 0)
        {
            sum = sum + i;
        }
    }
    if(sum == number)
    {
        cout << sum << " is a Perfect number..";
    }
    else
    {
        cout << sum << " is not a perfect number..";
    }

}
