#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c, x;
    char ch1, ch2;

    cin >> a >> ch1 >> b >> ch2 >> c;

    if(ch1 == '+'){
        x = a + b;
    }
    else if(ch1 == '-'){
        x = a - b;
    }
    else if(ch1 == '*'){
        x = a * b;
    }

    if(x == c){
        cout << "Yes" << endl;
    }
    else{
        cout << x << endl;
    }

    return 0;
}