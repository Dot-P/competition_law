#include <bits/stdc++.h>
using namespace std;
#include <atcoder/dsu>
using namespace atcoder;
#define rep(i, n) for (int i=0; i<n; i++)

int main(void){
  int N,Q,sum=0;
  cin >> N >> Q;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  vector<int> P(Q);
  vector<int> R(Q);
  rep(i, Q) cin >> P[i] >> R[i];

  vector<int> cumulative_sum;
  cumulative_sum.push_back(0);
  rep(i, N){
    sum += A[i];
    cumulative_sum.push_back(sum);
  }

  vector<int> ans;

  rep(i, Q){
    int x = cumulative_sum[R[i]]-cumulative_sum[P[i]-1];
    ans.push_back(x);
  }

  // rep(i, cumulative_sum.size()) cout << cumulative_sum[i] << " ";
  // cout << endl;
  rep(i, ans.size()) cout << ans[i] << endl;

  return 0;
}