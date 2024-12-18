
#include <iostream>
#define LL long long
using namespace std;

LL sum(LL end)
{
    LL result = ((1 + end) * end);
    return result / 2;
}

int main()
{
    LL n;
    while (cin >> n)
    {
        cout << sum(n) << endl
             << endl;
    }

    return 0;
}