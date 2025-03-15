
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;

    if (a < b){
      cout<<"No"<<endl;
      continue;
    }

    if (a == b){
      cout<<"Yes"<<endl;
      continue;
    }

    if ((a-b) % 2 == 0){
      cout<<"Yes"<<endl;
      continue;
    }else{
      cout<<"No"<<endl;
    }
  }

}