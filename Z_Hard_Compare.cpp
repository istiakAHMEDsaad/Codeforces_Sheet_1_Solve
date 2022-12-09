#include <iostream>
#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define do double 
int main()
{
    do a, b, c, d;
    do x, y;
    cin >> a >> b >> c >> d;
    x = b * log(a);
    y = d * log(c);
    if(x > y){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    return 0;
}

/*
#include <iostream>
#include <bits/stdc++.h>
#include<math.h>
using namespace std;
#define ll long long 
int main()
{
    ll a, b, c, d;
    double x, y;
    cin >> a >> b >> c >> d;
    
    x = log(a) * b;
    y = log(c) * d;

    if(x > y){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
*/