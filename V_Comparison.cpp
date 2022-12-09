#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    char ch;

    cin >> a >> ch >> b;

    if(ch == '<'){
        if(a < b){
            cout << "Right" << endl;
        }

        else{
            cout << "Wrong" << endl;
        }
    }

    if(ch == '>'){
        if(a > b){
            cout << "Right" << endl;
        }

        else{
            cout << "Wrong" << endl;
        }
    }

    if(ch == '='){
        if(a == b){
            cout << "Right" << endl;
        }

        else{
            cout << "Wrong" << endl;
        }
    }

    return 0;

}
