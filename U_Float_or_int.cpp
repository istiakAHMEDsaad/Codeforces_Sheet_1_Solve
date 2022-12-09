#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    cin >> n;
    int x = n;
    if(x == n){
        cout << "int " << x << endl;
    }
    else{
        cout << "float " << x << " " << n - x;
    }
    return 0;
}
