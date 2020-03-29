    #include<iostream>
    using namespace std;
    int main()
    {
       int number = 0;
       cout<<"Please enter the number";
       cin>> number;
       int rem, reverse = 0;
       while(number != 0)
       {
           rem = number % 10;
           reverse = reverse*10 + rem;
           number =  number / 10;
       }
       cout<< reverse;
    }

