#include<iostream>
#include<vector>
using namespace std;

vector<int> primeFactorization(int number)
{
    vector<int> v1;
        for(int i =2; i <= number;)
        {
            if(number % i == 0)
            {
                int flag = 0;
                for(int j =2; j < i; j++)
                {
                    int flag = 0;
                    if(i % j == 0)
                    {
                        flag = 1;
                    }
                }
                if(flag == 0)
                {
                   v1.push_back(i);
                   number = number / i;
                }
            }
            else
            {
                i++;
            }
        }
    return v1;
}

int main()
{
    int first = 0;
    int second = 0;
    cout << "Enter the first number..";
    cin >> first;

    cout << "Enter the second number..";
    cin >> second;
    vector<int> primeNumbers = primeFactorization(first);
    vector<int> primeNumbersForSecondNumber = primeFactorization(second);
    vector<int> newHcf;

    for(int i = 0; i < primeNumbers.size(); i++)
    {
        cout << primeNumbers.at(i) << " ";
    }
    cout << endl;
    for(int i = 0; i < primeNumbersForSecondNumber.size(); i++)
    {
        cout << primeNumbersForSecondNumber.at(i) << " ";
    }
    cout << endl;
    int k = 0;
    while(k!= primeNumbers.size())
    {
        int flag = 0;;
        for(int j = 0; j < primeNumbersForSecondNumber.size(); j++)
        {
            flag = 0;
            if(primeNumbers.at(k) == primeNumbersForSecondNumber.at(j))
            {
                newHcf.push_back(primeNumbers.at(k));
                primeNumbersForSecondNumber.erase(primeNumbersForSecondNumber.begin() + j);
                k++;
                flag = 1;
            }
        }
        if(flag == 0)
        {
            k++;
        }

    }

    int GcdValue = 1;
    for(int i = 0; i < newHcf.size(); i++)
    {
        GcdValue = GcdValue * newHcf.at(i);
    }
    cout << "GCD of the number.." << GcdValue;

}


