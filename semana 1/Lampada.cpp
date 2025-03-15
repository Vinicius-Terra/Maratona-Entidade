#include <iostream>

int main() {

  int n = 0;
  std::cin >> n;

  int lampada1 = 0, lampada2 = 0;
  
  int interrupitor = 0;
  for (int i = 0; i < n; i++) {
    std::cin >> interrupitor;

    if(interrupitor == 1){
      lampada1 = !lampada1;
    }else {
      lampada1 = !lampada1;
      lampada2 = !lampada2;
    }
  }

  
  std::cout << lampada1;
  std::cout << "\n";
  std::cout << lampada2;
}