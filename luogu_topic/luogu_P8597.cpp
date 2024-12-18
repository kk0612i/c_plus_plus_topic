
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;
const int N = 1010;
char start[N], ais[N];

void turn(int i)
{
    if (start[i] == 'o')
        start[i] = '*';
    else
        start[i] = 'o';
}

int main()
{

    cin >> start >> ais;
    int n = strlen(start);
    int res = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (start[i] != ais[i])
        {
            res++;
            turn(i), turn(i + 1);
        }
    };

    cout << res << endl;

    return 0;
}
