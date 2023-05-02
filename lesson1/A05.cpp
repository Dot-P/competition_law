#include <bits/stdc++.h>
using namespace std;
#include <atcoder/dsu>
using namespace atcoder;
#define rep(i, n) for (int i=0; i<n; i++)

int main(void){
  int N,K;
  cin >> N >> K;
  int count=0;

  for(int i=1; i<=N; i++){
    for(int j=1; j<=N; j++){
      if(K-i-j>0 && K-i-j<=N){
        count++;
      }
    }
  }
  cout << count << endl;

  return 0;
}