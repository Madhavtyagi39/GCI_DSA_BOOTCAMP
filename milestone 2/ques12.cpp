#include<iostream>
using namespace std;

int main()
{
    int year;
    cout << " Enter an year " ;
    cin >> year;
    if(year%4==0 || year%400==0)
    {
        cout << " It is a leap year. " ;
    }
    else {
        cout << " It is not a leap year. ";
    }

    return 0;
}