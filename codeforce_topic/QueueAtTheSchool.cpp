
#include <iostream>
#include <cstring>
using namespace std;

string replaceAll(string &str, string oldStr, string newStr)
{
    string::size_type p = str.find(oldStr);
    while (p != string::npos)
    {
        str.replace(p, oldStr.size(), newStr);
        p = str.find(oldStr);
    }

    return str;
}

int main()
{
    string str;
    int n, t;
    cin >> n >> t >> str;

    while (t--)
    {
        replaceAll(str, "BG", "GB");
    }
    cout << str << endl;

    return 0;
}