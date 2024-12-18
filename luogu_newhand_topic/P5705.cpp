
#include <iostream>
using namespace std;

int main()
{

    double n;
    cin >> n;
    int a = n * 10;
    int g1 = a / 1000;
    int g2 = a % 1000 / 100;
    int g3 = a % 1000 % 100 / 10;
    int g4 = a % 10;

    cout << g4 << "." << g3 << g2 << g1;

    return 0;
}