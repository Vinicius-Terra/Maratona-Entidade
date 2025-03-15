#include <iostream>
#include <string>
#include <map> 
#include <vector> 
using namespace std;

int mainx() { 
  int nTestes =0, nPeople, k;
  cin >> nTestes;

  for (int i=0; i<nTestes; i++){
    cin >> nPeople >> k;
    int robGold = 0;
    int donations = 0;
    for(int j=0; j < nPeople; j++){
      int aux;
      cin >> aux;
      if(aux >= k){
        robGold+=aux;
      }else if (aux == 0 && robGold > 0){
        donations++;
        robGold--;
      }
    }
    cout << donations << endl;
  }
  return 0;
}