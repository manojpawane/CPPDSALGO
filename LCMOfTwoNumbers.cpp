using namespace std;
#include<iostream>
int lcm(int, int);
int main()
{
    int first, second = 0;
    cout << "Please enter 2 number to find LCM..";
    cin >> first >> second;
    int lcmValue = lcm(first, second);
    cout << "The LCM for " << first << " and " << second << " is " << lcmValue;
}

int lcm(int first, int second)
{
    static int number  = first;
    if(number % first== 0 && number % second == 0)
    {
            return number;
    }
    number = number + first;
    lcm(first, second);
}
