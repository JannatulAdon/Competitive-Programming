#include <bits/stdc++.h>
using namespace std;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

int rand(long long l, long long r);
void num(long long l, long long r, long long n);                                // Random n numbers between l and r
void real(int l, int r, int d, int n);                        // Random n real numbers between l and r with d decimal places
string str(int l, char start, char end, int type);       // Random string of length l letters between start to end and type 1 for lowercase charecters and 2 for uppercase and 0 for both
string strmx(int mxlen, char start, char end, int type); // Random string of max length l letters between start to end and type 1 for lowercase charecters and 2 for uppercase and 0 for both
void tree(int n);                                             // Random tree of n nodes




int main() {
	int a = rand(1, 5);
	cout<<a<<endl;
    int b = rand(1, 2);
    for(int i = 0; i<a; i++)cout<<(b+=rand(0,2))<<' ';
    cout<<endl;
}









int rand(long long l, long long r)
{
    uniform_int_distribution<long long> uid(l, r);
    return uid(rng);
}
void num(long long l, long long r, long long n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << rand(l, r) << " ";
    }
}
void real(int l, int r, int d, int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << rand(l, r) << "." << rand(0, pow(10, d) - 1) << " ";
    }
}
string str(int l, char start, char end, int type)
{
    string rt;
    cout << l << "\n";
    for (int j = 0; j < l; ++j)
    {
        int v = (type == 0 ? rand(1, 150) : type);
        if (v % 2 == 1)
            rt += (char)rand((int)start, (int)end);
        else
            rt += (char)rand((int)start - 'a' + 'A', (int)end - 'a' + 'A');
    }
    return rt;
}
string strmx(int mxlen, char start, char end, int type)
{
    string rt;
    int l = rand(1, mxlen);
    //cout << l << '\n';
    for (int j = 0; j < l; ++j)
    {
        int v = (type == 0 ? rand(1, 150) : type);
        if (v % 2 == 1)
            rt += (char)rand((int)start, (int)end);
        else
            rt += (char)rand((int)start - 'a' + 'A', (int)end - 'a' + 'A');
    }
    return rt;
}
void tree(int n)
{
    int prufer[n - 2];
    for (int i = 0; i < n; i++)
    {
        prufer[i] = rand(1, n);
    }
    int m = n - 2;
    int vertices = m + 2;
    int vertex_set[vertices];
    for (int i = 0; i < vertices; i++)
        vertex_set[i] = 0;
    for (int i = 0; i < vertices - 2; i++)
        vertex_set[prufer[i] - 1] += 1;
    int j = 0;
    for (int i = 0; i < vertices - 2; i++)
    {
        for (j = 0; j < vertices; j++)
        {
            if (vertex_set[j] == 0)
            {
                vertex_set[j] = -1;
                cout << (j + 1) << " "
                     << prufer[i] << '\n';
                vertex_set[prufer[i] - 1]--;
                break;
            }
        }
    }
    j = 0;
    for (int i = 0; i < vertices; i++)
    {
        if (vertex_set[i] == 0 && j == 0)
        {
            cout << (i + 1) << " ";
            j++;
        }
        else if (vertex_set[i] == 0 && j == 1)
            cout << (i + 1) << "\n";
    }
}
