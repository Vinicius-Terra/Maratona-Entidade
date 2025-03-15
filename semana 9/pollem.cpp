#include <iostream>
#include <map>
using namespace std;

int sumOfDigits(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;

    map<int, int, greater<int>> freqMap;

    for (int i = 0; i < N; ++i)
    {
        int value;
        cin >> value;
        freqMap[value]++;
    }

    int result = 0;

    while (K > 0 && !freqMap.empty())
    {
        auto it = freqMap.begin();
        int V = it->first;
        int count = it->second;

        int S = sumOfDigits(V);

        if (count >= K)
        {
            result = S;
            break;
        }
        else
        {
            K -= count;
            freqMap.erase(it);
            int newV = V - S;
            if (newV > 0)
            {
                freqMap[newV] += count;
            }
        }
    }

    cout << result << '\n';
    return 0;
}