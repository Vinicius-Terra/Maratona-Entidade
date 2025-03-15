#include <iostream>

int main() {


  int p = 0, r =0;

  std::cin >> p;
  std::cin >> r;

  if (p == 0)
    std::cout << "C";
  else 
    if (r == 0)
      std::cout << "B";
    else 
      std::cout << "A";
    
}