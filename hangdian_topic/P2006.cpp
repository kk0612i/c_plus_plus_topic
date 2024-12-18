
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, sum = 1;
    while (cin >> n)
    {
        int t;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            if (t % 2 != 0)
            {
                sum = t * sum;
            }
        }
        cout << sum << endl;
        sum = 1;
    }
    return 0;
}
// 题目链接 https://acm.hdu.edu.cn/showproblem.php?pid=2006