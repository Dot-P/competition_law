#include <bits/stdc++.h>
using namespace std;
#include <atcoder/dsu>
using namespace atcoder;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
  int N,K;
  cin >> N >> K;
  vector<int> A(N+1);
  rep(i,1,N+1) cin >> A[i];
  vector<int> R(N+1);

  rep(i, 1, N){
    if(i==1) R[i] = 1;
    else R[i] = R[i-1];

    while(R[i] < N && A[R[i]+1]-A[i]<=K){
      R[i]++;
  }
}

  long long ans = 0; 
  rep(i, 1, N){
    ans += R[i]-i;
  }
  cout << ans << endl;

  return 0;
}