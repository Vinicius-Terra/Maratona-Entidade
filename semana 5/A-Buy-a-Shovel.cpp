#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

  int p, c;
  cin >> p >> c;
  int i=1;

  while(!(((p * i) % 10) == 0) && !(((p * i) % 10) == c) ){
    i++;
  }
  cout << i << endl;

}