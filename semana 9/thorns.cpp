#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int solution(int n)
{
    int coins = 0;
    int thorns = 0;

    vector<char> v;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        v.push_back(c);
    }

    for (int i = 0; i < n; i++)
    {
        char c = v[i];
        if (c == '@')
        {
            coins++;
            thorns = 0;
        }
        else if (c == '*' && thorns >= 1)
        {
            return coins;
        }
        else if (c == '*')
        {
            thorns++;
        }
        else
        {
            thorns = 0;
        }
    }
    return coins;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        cout << solution(m) << endl;
    }
    return 0;
}