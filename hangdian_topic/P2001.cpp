
#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    double x1, y1, x2, y2;

    while (cin >> x1 >> y1 >> x2 >> y2)
    {
        double t = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
        printf("%.2f", t);
    }

    return 0;
}
// 题目链接: https://acm.hdu.edu.cn/showproblem.php?pid=2001