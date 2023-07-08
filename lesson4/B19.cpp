#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
  long long int N,W;
  cin >> N >> W;
  vector<long long int> w(N+1);
  vector<long long int> v(N+1);
  rep(i, 1, N+1) cin >> w[i] >> v[i];

  vector<vector<long long int>> dp(N+1, vector<long long int> (100001));

    // dpの初期化
  dp[0][0] = 0;
  for(int i=1; i<=100000; i++){
      dp[0][i] = LLONG_MIN; // 選べるものがないため、最小値をセットします。
  }

  //dpテーブルの更新
  for(int i=1; i<=N; i++){
      for(int j=0; j<=100000; j++){
          if(j<w[i]){
              dp[i][j] = dp[i-1][j];
          } else {
              dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]]+v[i]);
          }
      }
  }

  //最大価値の探索
  long long max_v = 0;
  for(int i=0; i<=100000; i++){
      max_v = max(max_v, dp[N][i]);
  }

  cout << max_v << endl;

  return 0;
}

  // rep(i, 0, N+1){
  //   rep(j, 0, 100001){
  //     dp[i][j] = -1;
  //   }
  // }

  // dp[0][0] = 0;

  // rep(i, 1, N+1){ //Wを価値(MAX10^5に変換する)
  //   rep(j, 0, 100000){
  //     if(j-v[i]<0) dp[i][j] = dp[i-1][j];
  //     else{
  //       if(dp[i-1][j-v[i]] != -1){
  //         dp[i][j] = max(dp[i-1][j], dp[i-1][j-v[i]]+w[i]);
  //       }
  //     }
  //     if(dp[i][j]>=W) dp[i][j] = -1;
  //   }
  // }

  // long long int max=0;
  // for(int i=100000; i>=0; i--){
  //   if(dp[N][i]!=-1){
  //     max = i;
  //     break;
  //   }
  // }

  // rep(i, 0, 5){
  //   rep(j, 0, 42){
  //     cout << dp[i][j] << " ";
  //   }
  //   cout << endl;
  // }

  // cout << max << endl;