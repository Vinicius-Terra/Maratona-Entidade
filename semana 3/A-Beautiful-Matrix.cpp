#include <iostream>

int main() {
  int posi =0, posj =0, aux;

  for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
      std::cin >> aux;
      if( aux == 1){
        posi = i;
        posj = j;
      }
    }
  }

  int resposta = (abs(2-posi) + abs(2-posj));
  
  std::cout << resposta;
}