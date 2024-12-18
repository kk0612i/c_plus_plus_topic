
#include <iostream>

using namespace std;

int main()
{

    int k, time;
    cin >> k >> time;
    int t = 240 - time;
    if (t < 0)
    {
        cout << 0 << endl;
        return 0;
    }
    int res = 0;
    for (int i = 1; i <= k; i++)
    {
        if (i * 5 <= t)
            t -= i * 5, res++;
        ;
    }

    cout << res << endl;

    return 0;
}