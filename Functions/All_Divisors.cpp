#include<bits/stdc++.h>
using namespace std;

vector<int> divisors[100002]; //N_divisors()
void N_divisors(int n)        //N = 10^5, time needed 0.1 sec
{
    int i, j;
    for (i = 1; i <= n; i++)
        for (j = i; j <= n; j += i)
            divisors[j].push_back(i);
}
int main()
{
    
}