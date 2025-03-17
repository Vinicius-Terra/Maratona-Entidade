#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v;

    for (int x = 0; x < n; x++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        if (v[i] != i + 1)
        {
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}