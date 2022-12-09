#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
     cout << fixed << setprecision(9);
     float a, r;
     cin >> r;
     a = 3.141592653 * (r * r);
     cout << a << "\n";
     return 0;
}

/*
#include <iostream>
using namespace std;
int main()
{
    float a, r;
    cin >> r;
    a = 3.141592653 * (r * r);
    printf("%.9f", a);
    return 0;
}
*/

/*#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
#include <cmath>
#define f float
#define _USE_MATH_DEFINES
using namespace std;
int main()
{
    f p, r, a;
    cin >> r;
    a = M_PI * (r * r);
    printf("%.9f\n", a);
    /*cout << setprecision(11) <<a << "\n";
    return 0;
}
*/