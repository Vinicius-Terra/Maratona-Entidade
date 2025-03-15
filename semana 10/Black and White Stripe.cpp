#include <bits/stdc++.h>
using namespace std;

int result()
{
    int n, k;
    cin >> n >> k;
    vector<char> v;

    for (int x = 0; x < n; x++)
    {
        char a;
        cin >> a;
        v.push_back(a);
    }

    int window = 0;
    int maxWindow = 0;

    for (int x = 0; x < k; x++)
    {
        if (v[x] == 'B')
        {
            window++;
        }
    }

    maxWindow = window;

    for (int x = k; x < n; x++)
    {
        if (v[x - k] == 'B')
        {
            window--;
        }
        if (v[x] == 'B')
        {
            window++;
        }

        if (window > maxWindow)
        {
            maxWindow = window;
        }
    }

    cout << k - maxWindow << endl;
    return maxWindow;
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