#include <iostream>

int main() {

  int n=0, a=0,b=0,c=0, tempA, tempB, tempC;

  std::cin >> n;

  for(int i=0; i<n; i++){
    std::cin >> tempA >> tempB >> tempC;
    a = a + tempA;
    b = b + tempB;
    c = c + tempC;
  }

  if(a==0 && b==0 && c==0){
    std::cout << "YES";
  }else{
    std::cout << "NO";
  }
  
}