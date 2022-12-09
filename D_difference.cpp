#include <bits/stdc++.h>
int main()
{
    long long int n, a, b, c, d;

    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    n = (a * b) - (c * d);

    printf("Difference = %lld", n);

    return 0;
}