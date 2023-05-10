#include <bits/stdc++.h>
using namespace std;
#include <atcoder/dsu>
using namespace atcoder;
#define rep(i, n) for (int i=0; i<n; i++)

int main(void){
  int N;
  cin >> N;
  vector<int> X(N);
  vector<int> Y(N);
  rep(i, N) cin >> X[i] >> Y[i];
  int Q;
  cin >> Q;
  vector<int > a(Q);
  vector<int > b(Q);
  vector<int > c(Q);
  vector<int > d(Q);
  rep(i,Q) cin >> a[i] >> b[i] >> c[i] >> d[i];

  vector<vector<int>> coordinates(1600, vector<int>(1600, 0));
  rep(i, N) coordinates[X[i]][Y[i]]++;

  vector<vector<int>> cumulative_sum(1600, vector<int>(1600, 0));

  rep(i,1600){
    for(int j=1; j<1600; j++){
      cumulative_sum[i][j] += (cumulative_sum[i][j-1] + coordinates[i][j]);
    }
  }

  rep(i, 1600){
    for(int j=1; j<1600; j++){
      cumulative_sum[j][i] += cumulative_sum[j-1][i];
    }
  }

  // rep(i, 10){
  //   rep(j, 10){
  //     cout << cumulative_sum[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  rep(i, Q){
    int ans = cumulative_sum[c[i]][d[i]] + cumulative_sum[a[i]-1][b[i]-1] - cumulative_sum[c[i]][b[i]-1] - cumulative_sum[a[i]-1][d[i]];
    cout << ans << endl;
  }

  return 0;
}