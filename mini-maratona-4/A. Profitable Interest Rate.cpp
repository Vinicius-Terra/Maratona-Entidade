#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a >= b)
        {
            cout << a << endl;
            continue;
        }

        int diff = b - a;

        if (a >= diff)
        {
            cout << a - diff << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}