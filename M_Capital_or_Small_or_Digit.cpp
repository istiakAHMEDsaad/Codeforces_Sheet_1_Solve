#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    if ((char)ch >= 48 && (char)ch <= 64)
    {
        cout << "IS DIGIT";
    }
    else if ((char)ch >= 65 && (char)ch <= 96)
    {
        cout << "ALPHA" << endl
             << "IS CAPITAL" << endl;
    }
    else
    {
        cout << "ALPHA" << endl
             << "IS SMALL" << endl;
    }
    return 0;
}
