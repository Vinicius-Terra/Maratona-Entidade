#include <bits/stdc++.h>
using namespace std;


int main() {

  string s;

  getline(cin, s);

  int n = s.size();
  vector <int> v(n);

  for (int i=0; i<n; i++){
    if(s[i] != '+'){
      v.push_back(s[i]);
    }
  }

  sort(v.begin(), v.end());

  for (int i=0, j = 0; i<n; i++){
    if(s[i] != '+'){
      s[i] = v[j];
      j++;
    }
  }
  
  cout << s;
}