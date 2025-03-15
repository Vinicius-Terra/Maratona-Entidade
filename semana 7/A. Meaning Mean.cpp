#include <bits/stdc++.h>
using namespace std;

int result()
{

  int n;
  cin >> n;
  priority_queue<int, vector<int>, greater<int>> minHeap;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    minHeap.push(x);
  }

  while (minHeap.size() > 1)
  {
    int x = minHeap.top();
    minHeap.pop();
    int y = minHeap.top();
    minHeap.pop();
    minHeap.push((x + y) / 2);
  }

  return minHeap.top();
}

int main()
{

  int t;
  cin >> t;

  while (t--)
  {

    cout << result() << endl;
  }

  return 0;
}
