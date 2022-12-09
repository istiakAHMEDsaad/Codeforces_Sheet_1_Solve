#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string first_one, second_one;
    string third_one, forth_one;

    cin >> first_one >> second_one;
    cin >> third_one >> forth_one;

    if (second_one == forth_one)
    {
        cout << "ARE Brothers" << endl;
    }
    else
    {
        cout << "NOT" << endl;
    }
    return 0;
}