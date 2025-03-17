#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;

    for (int x = 0; x < n; x++)
    {
        string s;
        cin >> s;

        s.erase(s.size() - 2);
        s += 'i';
        cout << s << endl;
    }

    return 0;
}