#include <iostream>

using namespace std;

int main()
{
    int m = 0, n = 0;
    while (cin >> m >> n)
    {
        if (m > n)
        {
            int t = m;
            m = n;
            n = t;
        }
        bool isHua = false;
        for (int i = m; i <= n; i++)
        {
            int bai = i / 100;
            int shi = i % 100 / 10;
            int ge = i % 10;
            int hua = (bai * bai * bai) + (shi * shi * shi) + (ge * ge * ge);
            if (i == hua)
            {
                cout << i << " ";
                isHua = true;
            }
        }
        if (!isHua)
            cout << "no";
        cout << endl;
    }

    return 0;
}