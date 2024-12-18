#include <iostream>

using namespace std;
bool isSu(int a)
{

    for (int i = 2; i < a / i; i++)
    {
        if (a % i == 0)
            return false;
    }
    return true;
}

int main()
{

    int x, y;

    while (cin >> x >> y, x != 0, y != 0)
    {
        if (x > y)
        {
            int t = x;
            x = y;
            y = t;
        }
        bool l = true;
        for (int i = x; i <= y; i++)
        {
            int b = (i * i) + i + 41;
            if (!isSu(b))
            {
                l = false;
                cout << "Sorry" << endl;
                break;
            }
        }

        if (l)
            cout << "OK" << endl;
    }

    return 0;
}
