#include <bits/stdc++.h>
using namespace std;

int result()
{
    long long int n;
    cin >> n;
    long long int soma = 0;

    n = n - 1;
    while (n > 0)
    {
        soma += n + 1;
        n = (n - 1) / 2;
    }

    cout << soma + 1 << endl;
    return 0;
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