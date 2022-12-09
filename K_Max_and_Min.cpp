#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    long long int n[4], i;
    for (i = 0; i < 3; i++)
    {
        cin >> n[i];
    }
    sort(n, n + 3);
    cout << n[0] << " " << n[2] << endl;
    return 0;
}