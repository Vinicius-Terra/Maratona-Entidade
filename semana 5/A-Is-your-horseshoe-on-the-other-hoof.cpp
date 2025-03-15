#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

  int a[4], n=0;
  cin >> a[0] >> a[1] >> a[2] >> a[3];
  sort(a, a+4);
  int aux = a[0];

  for (int i = 1; i < 4; i++){
    if (a[i] == aux){
      n++;
    }
    aux = a[i];
  }
  cout << n << endl;
}