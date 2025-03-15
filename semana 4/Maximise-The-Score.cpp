#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++){
    int m;
    cin >> m;
    vector <int> v;
    for (int j = 0; j < m*2; j++){
      int a;
      cin >> a;
      v.push_back(a);
    }

    sort(v.begin(), v.end());
    int ans = 0;
    for (int j = 0; j < m*2; j = j+2)
      ans = ans + v[j];
    
    cout << ans << endl;
  }
}