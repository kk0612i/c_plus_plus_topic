#include <iostream>

using namespace std;

int main()
{

    int m, n;

    while (~scanf("%d%d", &m, &n))
    {
        if (m > n)
        {
            int t = m;
            m = n;
            n = t;
        }
        int x = 0, y = 0;
        for (int i = m; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                x += i * i;
            }
            else
            {
                y += i * i * i;
            }
        }
        cout << x << " " << y << endl;
    }

    return 0;
}

// 题目链接: https://acm.hdu.edu.cn/showproblem.php?pid=2008