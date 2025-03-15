#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, uns=0, dois=0, pass =3, maxSeq=0;
  cin >> n;
  for (int i=0; i<n; i++){

    int x;
    cin >> x;
    if (x==1 && x!= pass){
      uns = 1;
    }else if (x==1 && x == pass){
      uns ++;
    }else if(x==2 && x!= pass){
      dois = 1;
    }else{
      dois ++;
    }

    pass = x;

    int seq = min(uns, dois);
    maxSeq = max(maxSeq, seq);

  }

  cout << maxSeq * 2 << endl;

}