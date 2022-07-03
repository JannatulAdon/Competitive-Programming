#include<bits/stdc++.h>
using namespace std;

bool mark[1000000002] = {false}; //seive()
vector<int> prime;               //seive()
void seive(int n)
{
    int i, j, limit = sqrt(n * 1.) + 2;
    mark[0] = 1;
    mark[1] = 1;
    for (i = 4; i <= n; i += 2)
        mark[i] = 1;
    prime.push_back(2);
    for (i = 3; i <= n; i += 2)
        if (!mark[i])
        {
            prime.push_back(i);
            if (i <= limit)
                for (j = i * i; j <= n; j += i * 2)
                    mark[j] = 1;
        }
}
int main()
{
}