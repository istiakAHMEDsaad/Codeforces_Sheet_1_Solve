#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long num, year, month, day;
    cin >> num;
    year = (num / 365);
    num = num % 365;
    month = num / 30;
    num = num % 30;
    day = num;
    cout << year << " years" << endl
         << month << " months" << endl
         << day << " days" << endl;
    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num, year, month, day;
    cin >> num;
    year = (num / 365);
    month = (num % 365) / 30;
    day = ((num % 365) % 30) % 30;
    cout << year << " years" << endl << month << " months" << endl << day << " days" << endl;
    return 0;
}
*/