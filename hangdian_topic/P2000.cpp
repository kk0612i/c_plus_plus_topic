
#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str;
    while (cin >> str)
    {
        for (int i = 0; i < str.size(); i++)
        {
            for (int j = i + 1; j < str.size(); j++)
            {

                if ((str[i] - 0) > (str[j] - 0))
                {

                    swap(str[i], str[j]);
                }
            }
        }
        for (int i = 0; i < str.size(); i++)
        {
            if (i != str.size() - 1)
                cout << str[i] << " ";
            else
                cout << str[i];
        }
        cout << endl;
    }
    return 0;
}
// 题目链接 https://acm.hdu.edu.cn/showproblem.php?pid=2000