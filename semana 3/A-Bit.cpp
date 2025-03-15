#include <iostream>

int main() {
  int n, resposta =0;
  std::string s;
  std::cin >> n;

  for(int i = 0; i < n; i++){
    std::cin >> s;
    if(s[0] == '+'){
      resposta++;
    }else if (s[0] == '-'){
      resposta--;
    }else{
      if(s[2] == '+'){
        resposta++;
      }else{
        resposta--;
      }
    }
  }

  std::cout << resposta << std::endl;
}