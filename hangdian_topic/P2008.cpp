#include <iostream>

using namespace std;

int main()
{
    int n;

    while (cin >> n, n != 0)
    {
        int a = 0, b = 0, c = 0;
        for (int i = 0; i < n; i++)
        {
            double t = 0;
            cin >> t;
            if (t < 0.0)
                a++;
            else if (t == 0.0)
                b++;
            else
                c++;
        }
        cout << a << " " << b << " " << c;
        cout << endl;
    }

    return 0;
}
// 题目链接: https://acm.hdu.edu.cn/showproblem.php?pid=2009