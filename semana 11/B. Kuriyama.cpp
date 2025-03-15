#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long int> stones;

    for (int x = 0; x < n; x++)
    {
        int a;
        cin >> a;
        stones.push_back(a);
    }

    // Compute prefix sum for the original array
    vector<long long int> original_prefix(n + 1, 0);
    for (int i = 1; i <= n; i++)
        original_prefix[i] = original_prefix[i - 1] + stones[i - 1];

    // Compute prefix sum for the sorted array
    vector<long long int> sorted_stones = stones;
    sort(sorted_stones.begin(), sorted_stones.end());

    vector<long long int> sorted_prefix(n + 1, 0);
    for (int i = 1; i <= n; i++)
        sorted_prefix[i] = sorted_prefix[i - 1] + sorted_stones[i - 1];

    int m;
    cin >> m;

    while (m--)
    {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1)
            cout << (original_prefix[r] - original_prefix[l - 1]) << "\n";
        else
            cout << (sorted_prefix[r] - sorted_prefix[l - 1]) << "\n";
    }

    return 0;
}