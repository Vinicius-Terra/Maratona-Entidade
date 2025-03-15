#include <bits/stdc++.h>
using namespace std;

int result()
{
    int n, k;
    cin >> n >> k;

    int ops = 0;
    int count = 0;
    for (int x = 0; x < n; x++)
    {
        char a;
        cin >> a;
        if (a == 'B' && count == 0)
        {
            count = k - 1;
            ops++;
        }
        else if (count > 0)
        {
            count--;
        }
    }

    cout << ops << endl;
    return ops;
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