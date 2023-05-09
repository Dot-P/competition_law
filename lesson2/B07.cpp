#include <bits/stdc++.h>
using namespace std;
#include <atcoder/dsu>
using namespace atcoder;
#define rep(i, n) for (int i=0; i<n; i++)

int main(void){
  int T,N;
  cin >> T >> N;
  vector<int> L(N);
  vector<int> R(N);
  rep(i, N) cin >> L[i] >> R[i];

  vector<int> cumlative_sum(T+1, 0);

  rep(i, N){
    cumlative_sum[L[i]]++;
    cumlative_sum[R[i]]--;
  }

  // rep(i, cumlative_sum.size()) cout << cumlative_sum[i] << " ";
  // cout << endl;

  int sum=0;
  for(int i=0; i<T; i++){
    sum += cumlative_sum[i];
    cout << sum << endl;
  }

  return 0;
}