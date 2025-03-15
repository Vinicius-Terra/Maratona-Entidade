#include <bits/stdc++.h>
using namespace std;


int main() {
  vector <int> v;

  for (int i=0; i<3; i++){
    int x;
    cin>>x;
    v.push_back(x);
  }

  sort(v.begin(), v.end(), greater<int>());
  
  int ans = (v[0] - v[1]) + (v[1] - v[2] );

  cout << ans;
}