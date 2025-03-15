#include <iostream>

int main() {

  int n=0, a =0, b =0, c =0, resposta =0;

  std::cin >> n;

  for(int i = 0; i < n; i++){
    std::cin >> a >> b >> c;
    if( (a + b + c) >= 2){
      resposta++;
    }
  }
  
  std::cout << resposta;
}