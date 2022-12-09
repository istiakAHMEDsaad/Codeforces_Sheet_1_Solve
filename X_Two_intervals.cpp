#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll l1, r1, l2, r2;
    ll x, y;
    cin >> l1 >> r1 >> l2 >> r2;
    x = max(l1,l2);
    y = min(r1,r2);

    if(x > y){
        cout << "-1" << endl;
    }
    else{
        cout << x << " " << y << endl;
    }

    return 0;
}