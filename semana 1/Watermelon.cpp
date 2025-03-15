#include <iostream>

int main() {

  int w =0;

  std::cin >> w;

  if (w <= 2 || w % 2 != 0) {
    std::cout << "NO\n";
  }else {
    std::cout << "YES\n";
  }

  return 0;
}