#include <bits/stdc++.h>
using namespace std;
#include <atcoder/dsu>
using namespace atcoder;
#define rep(i, n) for (int i=0; i<n; i++)

int main(void){
  int H,W;
  cin >> H >> W;
  vector<vector<int>> X(H+1, vector<int>(W+1, 0));
  rep(i, H){
    rep(j, W){
      cin >> X[i+1][j+1];
    }
  }
  int Q;
  cin >> Q;
  vector<int> A(Q);
  vector<int> B(Q);
  vector<int> C(Q);
  vector<int> D(Q);
  rep(i, Q) cin >> A[i] >> B[i] >> C[i] >> D[i];

  vector<vector<int>> cumulative_sum(H+1, vector<int>(W+1, 0));

  rep(i, H+1){
    cumulative_sum[i][1] = X[i][1];
    for(int j=2; j<W+1; j++){
      cumulative_sum[i][j] += (cumulative_sum[i][j-1] + X[i][j]);
    }
  }

  // rep(i, H+1){
  //   rep(j, W+1){
  //     cout << cumulative_sum[i][j] << " ";
  //   }
  //   cout << endl;
  // }

    rep(i, W+1){
    for(int j=1; j<H+1; j++){
      cumulative_sum[j][i] += cumulative_sum[j-1][i];
    }
  }

  //   rep(i, H+1){
  //   rep(j, W+1){
  //     cout << cumulative_sum[i][j] << " ";
  //   }
  //   cout << endl;
  // }

  int ans=0;
  rep(i, Q){
    ans = cumulative_sum[C[i]][D[i]] + cumulative_sum[A[i]-1][B[i]-1] - cumulative_sum[A[i]-1][D[i]] - cumulative_sum[C[i]][B[i]-1]; 
    cout << ans << endl;
  }

  return 0;
}