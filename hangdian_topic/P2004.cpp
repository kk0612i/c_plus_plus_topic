#include <iostream>

using namespace std;

int main()
{
    int num;
    while (cin >> num)
    {
        if (num >= 0 && num <= 59)
        {
            cout << "E" << endl;
        }
        else if (num >= 60 && num <= 69)
        {
            cout << "D" << endl;
        }
        else if (num >= 70 && num <= 79)
        {
            cout << "C" << endl;
        }
        else if (num >= 80 && num <= 89)
        {
            cout << "B" << endl;
        }
        else if (num >= 90 && num <= 100)
        {
            cout << "A" << endl;
        }
        else
            cout << "Score is error!";
    }

    return 0;
}
// 题目链接: https://acm.hdu.edu.cn/showproblem.php?pid=2005