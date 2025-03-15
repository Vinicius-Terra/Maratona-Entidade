#include <bits/stdc++.h>
using namespace std;

int result()
{
    string s;
    cin >> s;
    int asw = 0;
    int sufix0 = 0;
    int sufix1 = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            sufix0++;
        }
        else
        {
            sufix1++;
        }
    }

    asw = min(sufix0, sufix1);

    int prefix0 = 0;
    int prefix1 = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            prefix0++;
            sufix0--;
        }
        else
        {
            prefix1++;
            sufix1--;
        }

        asw = min(asw, prefix1 + sufix0);
        asw = min(asw, prefix0 + sufix1);
    }

    cout << asw << endl;
    return asw;
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