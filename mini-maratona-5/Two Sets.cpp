#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v;
    vector<int> v2;

    int sum = (n * (n + 1)) / 2;

    if (sum % 2 != 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        sum /= 2;

        for (int i = n; i >= 1; i--)
        {
            if (sum - i >= 0)
            {
                v.push_back(i);
                sum -= i;
            }
            else
            {
                v2.push_back(i);
            }
        }

        cout << v.size() << endl;
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
        cout << v2.size() << endl;
        for (int i = 0; i < v2.size(); i++)
        {
            cout << v2[i] << " ";
        }
        cout << endl;
    }

    return 0;
}