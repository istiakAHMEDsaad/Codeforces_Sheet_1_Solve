#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    x = n / 1000;
    if (x % 2 == 0)
    {
        cout << "EVEN" << endl;
    }
    else
    {
        cout << "ODD" << endl;
    }
    return 0;
}