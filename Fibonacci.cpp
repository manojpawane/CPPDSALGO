using namespace std;
#include<iostream>
int main()
{
    int first, second, number, next;
    first = 0;
    second = 1;
    number = 0;
    next = 0;
    cout << "Enter the number for range of Fibonacci series";
    cin >> number;
    for(int i = 0 ; i < number; i++)
    {
        if(i <= 1)
        {
            next = i;
        }
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << endl;
    }
}
