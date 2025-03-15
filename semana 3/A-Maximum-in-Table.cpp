#include <iostream>

int main() {
  int n =0;
  std::cin >> n;

  int v[n+1][n+1] ;

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(i ==0 | j == 0)
        v[i][j] = 1;
      else 
        v[i][j] = v[i-1][j] + v[i][j-1];
    }
  }

  std::cout << v[n-1][n-1];
}