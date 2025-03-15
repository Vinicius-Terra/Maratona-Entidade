#include <bits/stdc++.h>
using namespace std;

int result()
{
    int n, k;
    cin >> n >> k;
    vector<int> v;

    for (int x = 0; x < n; x++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    int window = 0;
    int minWindow = 0;

    for (int x = 0; x < k; x++)
    {
        window += v[x];
    }

    minWindow = window;
    int index = 1;
    for (int x = k; x < n; x++)
    {
        window += v[x] - v[x - k];
        if (window < minWindow)
        {
            minWindow = window;
            index = x - k + 2;
        }
    }

    cout << index << endl;
    return index;
}

int main()
{

    result();

    return 0;
}