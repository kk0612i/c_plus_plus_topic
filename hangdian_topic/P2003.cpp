#include <iostream>

using namespace std;

int main()
{

    double r;
    while (cin >> r)
    {
        if (r < 0)
        {
            r = -r;
        }
        printf("%.2f", r);
    }

    return 0;
}
// 题目链接: https://acm.hdu.edu.cn/showproblem.php?pid=2004