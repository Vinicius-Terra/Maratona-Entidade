#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // Sort the array in descending order
    sort(v.begin(), v.end(), greater<long long int>());

    // Frequency array to accumulate range frequencies
    vector<long long int> freq(n + 1, 0);

    for (int x = 0; x < q; x++)
    {
        int l, r;
        cin >> l >> r;
        freq[l - 1]++; // l-1 because input is 1-based, and we need 0-based indexing
        if (r < n)
        {
            freq[r]--; // decrement position right after r
        }
    }

    // Calculate the prefix sum for frequency
    for (int i = 1; i < n; i++)
    {
        freq[i] += freq[i - 1];
    }

    // Sort the frequencies in descending order
    sort(freq.begin(), freq.end() - 1, greater<long long int>());

    // Calculate the maximum sum
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i] * freq[i];
    }

    cout << sum << endl;
    return 0;
}
