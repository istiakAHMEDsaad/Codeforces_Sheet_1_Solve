#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
int main()
{
    int a, b;
    double sum, res1, res2, res3;
    cin >> a >> b;
    sum = (double)a / (double)b;
    res1 = floor(sum);
    res2 = ceil(sum);
    res3 = round(sum);
    cout << "floor " << a << " / " << b << " = " << res1  << endl;
    cout << "ceil " << a << " / " << b << " = " << res2   << endl;
    cout << "round " << a << " / " << b << " = " << res3  << endl;
    return 0;
}