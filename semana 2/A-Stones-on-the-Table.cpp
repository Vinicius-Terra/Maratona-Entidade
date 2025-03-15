#include <iostream>

int main() {

  int n=0, resposta = 0;
  char pedraAgora = 'x', pedraAntes = 'x';

  std::cin >> n;

  for(int i=0; i<n; i++){
    if(i == 0){
      std::cin  >> pedraAntes;
    }else{
      std::cin  >> pedraAgora;
      if(pedraAntes == pedraAgora){
        resposta++;
      }
      pedraAntes = pedraAgora;
    }
  }
  
  std::cout << resposta;
}