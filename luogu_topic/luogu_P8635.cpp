
#include <iostream>
#include <cmath>

using namespace std;

int n;

int main()
{
    cin >> n;
    for (int a = 0; a * a <= n; a++)
    {
        for (int b = a; a * a + b * b <= n; b++)
            for (int c = b; a * a + b * b + c * c <= n; c++)
            {
                int t = n - a * a - b * b - c * c;
                int d = sqrtl(t);
                if (d * d == t)
                {
                    printf("%d %d %d %d\n", a, b, c, d);
                    return 0;
                }
            }
    }

    return 0;
}
