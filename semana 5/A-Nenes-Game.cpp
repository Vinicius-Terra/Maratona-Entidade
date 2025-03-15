#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

  int m;
  cin>>m;

  for (int i=0; i<m; i++){
    int nn, n = INFINITY, q;
    cin>>nn>>q;
    for (int j=0; j<nn; j++){
      int a;
      cin>>a;
      if (a<n){
        n = a;
      }
    }
    
    for (int j=0; j<q; j++){
      int a;
      cin>>a;

      if (a<n)
        cout << a << " ";
      else
        cout << n-1 << " ";
      
    }

    cout << endl;
  }

}