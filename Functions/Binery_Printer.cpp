#include <iostream>
#include <iomanip>
using namespace std;

void binary(long long input)
{
    long long rem, count = 0, chan = 0, output[100];
    while (1)
    {
        output[count] = input % 2;
        input /= 2;
        if (input == 0)
            break;
        else
            count++;
    }

    for (int i = 15; i >= 0; i--)
    {
        if (i % 4 == 3)
            cout << " ";
        if (i > count)
            cout << "0";
        else
        {
            cout << output[count];
            count--;
        }
    }
}
void output(long long in1)
{
    cout << setw(3) << in1 << " => ";
    binary(in1);
    cout << '\n';
}
int main()
{
    int start = 1, end = 100;
    //cin >> start >> end;
    for (int i = start; i <= end; i++)
        output(i);
}