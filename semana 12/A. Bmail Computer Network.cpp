#include <bits/stdc++.h>
using namespace std;

int result()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    vector<int> path;

    v[0] = 0;
    v[1] = -1;

    for (int x = 2; x <= n; x++)
    {
        int a;
        cin >> a;
        v[x] = a;
    }

    int j = n;
    path.push_back(j);
    while (v[j] != -1)
    {
        j = v[j];
        path.push_back(j);
    }

    for (int i = path.size() - 1; i >= 0; i--)
    {
        cout << path[i] << " ";
    }

    return 0;
}

int main()
{

    result();

    return 0;
}