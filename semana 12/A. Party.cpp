#include <bits/stdc++.h>
using namespace std;

struct person
{
    long long int manager;
    bool visited;
};

int main()
{
    int n;
    cin >> n;
    ;

    vector<person> v(n);
    long long int asw = 0;

    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        v[i].manager = m;
        v[i].visited = false;
    }

    for (int i = 0; i < n; i++)
    {
        long long int sum = 1;
        if (v[i].visited == false)
        {
            int j = i;
            while (v[j].manager != -1)
            {
                v[j].visited = true;
                j = v[j].manager - 1;
                sum++;
            }
        }
        asw = max(asw, sum);
    }

    cout << asw << endl;
    return 0;
}
