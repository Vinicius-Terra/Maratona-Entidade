
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    int m, o;
    cin>>m>>o;
    
    int arr1[m];
    for(int j=0;j<m;j++){
      char c;
      cin>>c;
      arr1[j] = c;
    }

    int arr2[o];
    for(int j=0;j<o;j++){
      char c;
      cin>>c;
      arr2[j] = c;
    }

    int pointer1=0, pointer2=0;

    while(pointer1<m && pointer2<o){
      if(arr1[pointer1]==arr2[pointer2]){
          pointer1++;
          pointer2++;
      }else{
        pointer2++;
      }      
    }

    cout << pointer1 << endl;
    
  }

}