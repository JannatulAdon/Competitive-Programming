#include <bits/stdc++.h>
using namespace std;

long double fibonacci_binet(unsigned int n) // returns fibonacci in O(1) upto 1474
{
    static const double phi = (1 + sqrt(5)) * 0.5;
    double fib = (pow(phi, n) - pow(1 - phi, n)) / sqrt(5);
    return round(fib);
}
int main()
{
}