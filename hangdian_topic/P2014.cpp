#include <iostream>

using namespace std;

int main()
{
    int n;
    double score[100000];
    int minIdx = 0;
    int maxIdx = 0;
    while (cin >> n)
    {
        int MAX = 0x7fffffff;
        int MIN = -0x7fffffff;
        double sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> score[i];
            if (score[i] < MAX)
            {
                MAX = score[i];
                minIdx = i;
            }
            if (score[i] > MIN)
            {
                MIN = score[i];
                maxIdx = i;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (i == minIdx || i == maxIdx)
            {
                continue;
            }
            else
            {
                sum += score[i];
            }
        }

        double score = sum / (n - 2);
        printf("%.2lf", score);
    }

    return 0;
}
