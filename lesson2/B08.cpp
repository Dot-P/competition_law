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
    // cumulative_sum[i][0] = coordinates[i][0];
    for(int j=1; j<1600; j++){
      cumulative_sum[i][j] = coordinates[i][j-1] + coordinates[i][j];
    }
  }

  rep(i, 1600){
    for(int j=1; j<1600; j++){
      cumulative_sum[j][i] += coordinates[j-1][i];
    }
  }

  rep(i, 10){
    rep(j, 10){
      cout << cumulative_sum[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}