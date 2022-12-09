#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    if ((char)ch >= 65 && (char)ch <= 96)
    {
        ch += 32;
        cout << ch << endl;
    }
    else
    {
        ch -= 32;
        cout << ch << endl;
    }
    return 0;
}