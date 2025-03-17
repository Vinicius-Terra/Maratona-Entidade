#include <bits/stdc++.h>
using namespace std;

int result()
{
    string s;
    cin >> s;

    bool flag = false;

    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << s.size() << endl;
    }

    return 0;
}

int main()
{
    int n;
    cin >> n;

    for (int x = 0; x < n; x++)
    {
        result();
    }

    return 0;
}