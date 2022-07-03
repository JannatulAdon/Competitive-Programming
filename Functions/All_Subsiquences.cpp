//This prints all the subsiquences of a string and it takes about 0.6 sec when the lenght of string is equels to 26


#include <bits/stdc++.h>
#include <malloc.h>

using namespace std;

void subsequences(char *prefix, int prefixLength, const char *suffix)
{
    if (prefixLength < 0)
        cout << prefix << '\n';

    for (size_t i = 0; i < strlen(suffix); ++i)
    {
        prefix[prefixLength] = suffix[i];
        prefix[prefixLength + 1] = '\0';
        subsequences(prefix, prefixLength + 1, suffix + i + 1);
    }
}

int main(int argc, char *argv[])
{
    char inputString[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *prefix = (char *)_alloca(strlen(inputString) + 1);
    subsequences(prefix, 0, inputString);
}