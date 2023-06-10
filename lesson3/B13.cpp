#include <bits/stdc++.h>
using namespace std;
#include <atcoder/dsu>
using namespace atcoder;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
  int N, K;
  cin >> N >> K;
  vector<int > A(N);
  rep(i, 0, N) cin >> A[i];

  vector<int> cumulative_sum(N+1, 0);
  rep(i, 0, N) cumulative_sum[i+1] = cumulative_sum[i] + A[i];

  rep(i, 1, N+1){
    if(culumative_sum[i])
  }

  //rep(i, 0, N+1) cout << cumulative_sum[i] << " ";

  return 0;
}