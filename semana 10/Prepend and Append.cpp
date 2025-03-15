#include <bits/stdc++.h>
using namespace std;

int result()
{
    int n;
    cin >> n;
    vector<char> v;

    for (int x = 0; x < n; x++)
    {
        char a;
        cin >> a;
        v.push_back(a);
    }

    int size = v.size();
    int i = 0, j = size - 1;
    while (i <= j)
    {
        if (v[i] != v[j])
        {
            size -= 2;
            i++;
            j--;
        }
        else
        {
            break;
        }
    }

    if (size < 0)
    {
        size = 0;
    }
    cout << size << endl;
    return size;
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