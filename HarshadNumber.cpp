#include<iostream>
using namespace std;
int main()
{
    int number = 0;
    cout<<"Enter the number to check whether it is Harshad Number..";
    cin >> number;
    int duplicateCopy = 0;
    duplicateCopy = number;
    int temp = 0;
    int sum = 0;
    while(duplicateCopy != 0)
    {
        temp = duplicateCopy % 10;
        sum = sum + temp;
        duplicateCopy = duplicateCopy / 10;
    }
    if(number % sum == 0)
    {
        cout << "Number is Harshad number..";
    }
    else
    {
        cout << "Number is not a Harshad Number..";
    }
}
