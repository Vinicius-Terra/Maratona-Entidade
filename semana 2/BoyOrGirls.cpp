#include <iostream>
#include <string>
#include <map>

int main() {

  std::string  s;

  std::getline(std::cin, s);

  std::map<char, int> vetor;
  int resposta =0;


  for (char c : s) {
    if(vetor[c] == 0){
      resposta++;
    }
    vetor[c]++;
  }

  if(resposta % 2 == 0){
    std::cout << "CHAT WITH HER!";
  } else {
    std::cout << "IGNORE HIM!";
  }
}
