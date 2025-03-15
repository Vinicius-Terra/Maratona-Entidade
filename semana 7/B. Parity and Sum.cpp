#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm> 
using namespace std;


int main() {
  long long int nTestes = 0, n;
  cin >> nTestes;

  for (long long int i = 0; i < nTestes; i++) {
    vector <long long int> v;
    cin >> n;
    long long int nPares = 0, nImpares = 0, maiorImpar = 0, maiorPar= 0;
    for (long long int j = 0; j < n; j++) {
      long long int aux;
      cin >> aux;
      v.push_back(aux);
      if (aux % 2 == 0) {
        nPares++;
        if (maiorPar < aux) {
          maiorPar = aux;
        }
      } else {
        nImpares++;
        if (maiorImpar < aux) {
          maiorImpar = aux;
        }
      }
    }

    sort(v.begin(), v.end());


    if (nPares == n || nImpares == n) {
      cout << 0 << endl;
    } else {
      long long int cont =0;
      long long int j =0;
      while( j < n){
        if ( v[j] % 2 == 0) {
          if(maiorImpar > v[j]){
            cont++;
            maiorImpar += v[j];
            j++;
          }else{
            maiorImpar += maiorPar;
            cont++;
          }
        } else {
          j++;
        }
      }
      cout << cont << endl;
    }
  }
  return 0;
}