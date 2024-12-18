#include <iostream>
#include <string>
using namespace std;

int main()
{

    int year, month, day;
    while (~scanf("%d/%d/%d", &year, &month, &day))
    {

        int sum = 0;
        if (month > 2 && month <= 12)
        {
            sum += 31;
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            {
                sum += 29;
            }
            else
            {
                sum += 28;
            }
            for (int i = 3; i < month; i++)
            {
                if (i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
                {
                    sum += 31;
                }
                else
                {
                    sum += 30;
                }
            }
            sum += day;
        }
        else if (month >= 1 && month <= 2)
        {
            if (month == 2)
            {
                sum = 31 + day;
            }
            else
                sum = day;
        }

        cout << sum << endl;
    }

    return 0;
}
// 题目链接: shttps://acm.hdu.edu.cn/showproblem.php?pid=2005