#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin>>n;

  for (int i=0; i<n; i++){
    int m, k;
    cin>>m>>k;
    int arr[m];
    for (int j=0; j<m; j++){
      cin>>arr[j];
    }

    sort(arr, arr+m);

    int maiorSeq = 0;
    int seq = 1;
    for(int j =0; j<m-1; j++){

      if(arr[j] == 0){
        continue;
      }else if (arr[j+1] - arr[j] <= k){
        seq++;
      }else{

        if(seq > maiorSeq){
          maiorSeq = seq;
        }
        
        seq = 1;
      }
      
    }

    if(seq > maiorSeq)
      maiorSeq = seq;

    cout<< (m - maiorSeq) <<endl;
    
  }
  
}