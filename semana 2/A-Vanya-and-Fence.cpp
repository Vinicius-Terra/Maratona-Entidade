#include <iostream>

int main() {
  int n=0, hCerca=0, hPessoa = 0, resposta = 0;

  std::cin >> n >> hCerca;

  for (int i=0; i<n; i++){
    std::cin >> hPessoa;
    if(hPessoa > hCerca){
      resposta = resposta + 2;
    }else{
      resposta++;
    }
  }
  
  std::cout << resposta;
}