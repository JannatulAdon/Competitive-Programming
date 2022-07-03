#include <bits/stdc++.h>
using namespace std;
long long powermod(long long a, long long b, long long M) //Returns a^b Mod M
{
    if (b == 0)
        return 1LL;
    if (b == 1)
        return a % M;
    long long ans = 1;
    while (b)
    {
        if (b % 2 == 1)
            ans = (((ans % M) * (a % M)) % M);
        a = (((a % M) * (a % M)) % M);
        b /= 2;
    }
    return ans;
}
int main()
{
}