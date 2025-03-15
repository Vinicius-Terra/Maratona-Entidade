
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {

  int m;
  cin >> m;
  for (int j = 0; j < m; j++) {
    int n;
    cin >> n;
    int pares =0;
    int impares =0;
    int parOUimpar = 0; // 0 eh par, 1 eh impar
    int errados = 0;

    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;

      if (a % 2 == 0)
        pares++;
      else
        impares++;

      if (a % 2 != parOUimpar) {
        errados++;
      }
      parOUimpar = !parOUimpar;
    }

    bool valido = (pares == impares) || (pares == impares + 1);
    if (valido && errados % 2 == 0) {
      cout << errados / 2 << endl;
    } else {
      cout << -1 << endl;
    }
  }
}