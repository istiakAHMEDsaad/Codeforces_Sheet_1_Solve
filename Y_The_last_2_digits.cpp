#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll a, b, c, d, ans;
    cin >> a >> b >> c >> d;

    a = a % 100;
    b = b % 100;
    c = c % 100;
    d = d % 100;

    ans = (a * b * c * d) % 100;

    if (ans < 10)
    {
        cout << "0" << ans << endl;
    }

    else
    {
        cout << ans << endl;
    }

    return 0;
}