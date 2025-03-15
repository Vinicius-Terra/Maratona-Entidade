#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++){
    int m;
    int asw = 0;
    cin >> m;
    for(int j = 0; j < m; j++){
      int x;
      cin >> x;
      asw += fabs(x);
    }
    cout << asw << endl;
  }
}