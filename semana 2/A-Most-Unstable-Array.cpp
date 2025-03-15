#include <iostream>

int main() {

  int t = 0, n, m;

  std::cin >> t;

  for (int i = 0; i < t; i++){
    std::cin >> n >> m;

    if(n == 1){
      std::cout << 0 << "\n";
    }else if ( n == 2){
      std::cout << m << "\n";
    }else {
      std::cout << m * 2 << "\n";
    }

  }
  
}