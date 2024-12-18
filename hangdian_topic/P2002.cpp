#include <iostream>

using namespace std;

#define PI 3.1415927

int main()
{
    double r;
    while (cin >> r)
    {
        double x = 4.0 / 3.0;
        double t = x * 3.1415927 * (r * r * r);
        printf("%.3f", t);
    }

    return 0;
}
// 题目链接: https://acm.hdu.edu.cn/showproblem.php?pid=2002