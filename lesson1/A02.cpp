#include <bits/stdc++.h>
using namespace std;
#include <atcoder/dsu>
using namespace atcoder;
#define rep(i, n) for (int i=0; i<n; i++)

int main(void){
  int N,X; cin>>N>>X;
  vector<int> A(N); rep(i,N) cin>>A[i];
  rep(i,N){
    if(A[i]==X){
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}