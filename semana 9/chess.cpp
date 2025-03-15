#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int x = 0; x < n; x++)
    {
        int a, b, c;
        int empates = 0;
        vector<int> v;
        cin >> a >> b >> c;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        while (true)
        {
            if (v[0] == 0 && v[1] == 0)
            {
                break;
            }
            else
            {
                v[1]--;
                v[2]--;
                empates++;
                sort(v.begin(), v.end());
            }
        }

        if (v[0] % 2 == 0 && v[1] % 2 == 0 && v[2] % 2 == 0)
        {
            cout << empates << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}