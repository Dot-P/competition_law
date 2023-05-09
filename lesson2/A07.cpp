#include <bits/stdc++.h>
using namespace std;
#include <atcoder/dsu>
using namespace atcoder;
#define rep(i, n) for (int i=0; i<n; i++)

int main(void){
  int D,N;
  cin >> D >> N;
  vector<int> L(N);
  vector<int> R(N);
  rep(i, N) cin >> L[i] >> R[i];
  vector<int> cumulative_sum(D, 0);

  rep(i, N){
    cumulative_sum[L[i]-1]++;
    cumulative_sum[R[i]]--;
  }

  int sum=0;
  rep(i, D){
    sum += cumulative_sum[i];
    cout << sum << endl;
  }

  return 0;
}