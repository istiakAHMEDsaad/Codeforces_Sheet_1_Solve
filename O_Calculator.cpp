#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x, y;
    char op;
    cin>>x>>op>>y;
    switch (op)
    {
    case '+':
        cout << x + y;
        break;

    case '-':
        cout << x - y;
        break;

    case '*':
        cout << x * y;
        break;

    case '/':
        cout << x / y;
        break;

    default:
        break;
    }

    return 0;
}