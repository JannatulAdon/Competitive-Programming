//"starttime;" to start the timer, "endtime;" to end the timer and to print the time
#include <bits/stdc++.h>
using namespace std;
#define starttime       \
    clock_t start, end; \
    double time;        \
    start = clock()
#define endtime                                    \
    end = clock();                                 \
    time = (double)(end - start) / CLOCKS_PER_SEC; \
    cout << "\n" << "Time : " << time << endl
int main()
{
}