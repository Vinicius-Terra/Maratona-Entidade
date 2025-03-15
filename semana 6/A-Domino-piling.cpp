#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m;
  cin>>n >> m;

  int res = n / 2 * m;
  if(n % 2 != 0){
    res += m / 2;
  }
  cout<<res<<endl;
}
