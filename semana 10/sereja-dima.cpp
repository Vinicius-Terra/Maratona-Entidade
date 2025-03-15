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

    int i = 0, j = n - 1;
    int sereja = 0, dima = 0;
    bool turno = true;
    while (i <= j)
    {

        if (v[i] > v[j])
        {
            if (turno)
            {
                sereja += v[i];
            }
            else
            {
                dima += v[i];
            }
            i++;
        }
        else
        {
            if (turno)
            {
                sereja += v[j];
            }
            else
            {
                dima += v[j];
            }
            j--;
        }
        turno = !turno;
    }

    cout << sereja << " " << dima << endl;
    return 0;
}