#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
  long long int N,W;
  cin >> N >> W;
  vector<long long int> w(N+1);
  vector<long long int> v(N+1);
  rep(i, 1, N+1) cin >> w[i] >> v[i];

  vector<vector<long long int>> dp(N+1, vector<long long int> (W+1));

  rep(i, 0, N+1){
    rep(j, 0, W+1){
      dp[i][j] = -1;
    }
  }

  dp[0][0] = 0;

  rep(i, 1, N+1){
    rep(j, 0, W+1){
    if( j - w[i] < 0 ) dp[i][j] = dp[i-1][j];
    else dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]]+v[i]);
    }
  }

  long long int max=0;
  rep(i, 0, W+1){
    if(max<dp[N][i]){
      max = dp[N][i];
    }
  }

  cout << max << endl;

  return 0;
}