#include <iostream>

int main() {
  std::string s, r;

  int n=0, lentgh =0;

  std::cin >> n;
  
  for (int i=0; i < n; i++){
    std::cin >> s;
    lentgh = s.length();

    if(lentgh > 10){
      std::cout << s[0] << (lentgh-2) << s[lentgh-1] << std::endl;
    }else{
      std::cout << s << std::endl;
    }
  }

}