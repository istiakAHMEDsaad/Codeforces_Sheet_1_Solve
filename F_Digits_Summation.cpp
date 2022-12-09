#include<iostream>
using namespace std;
int main()
{
    long long int n, m, sum = 0, l_n;
    long long int  l_m;
    cin >> n >> m;
    l_n = n % 10;
    l_m = m % 10;
    sum = l_n + l_m;
    cout << sum;
    return 0;
}