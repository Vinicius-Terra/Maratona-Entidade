#include <iostream>

int main() {

  int x = 0, maior = 0;
  std::cin >> x;

  while (x != 0) {
    if (x > maior)
      maior = x;
    
    std::cin >> x;
  }
  
  std::cout << maior;
}