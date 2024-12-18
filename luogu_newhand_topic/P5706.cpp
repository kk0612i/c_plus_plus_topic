/*
 * @Author: kk 100138974+kk0612i@users.noreply.github.com
 * @Date: 2024-12-10 17:20:15
 * @LastEditors: kk 100138974+kk0612i@users.noreply.github.com
 * @LastEditTime: 2024-12-10 20:31:37
 * @FilePath: \c++_vscode_workspace\luogu_newhand_topic\P5706.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>

using namespace std;

int main()
{

    double t;
    int n;
    cin >> t >> n;

    double ml = t / n;
    int count = n * 2;
    printf("%.3f\n", ml);

    cout << count << endl;

    return 0;
}