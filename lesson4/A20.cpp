#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
  string S;
  string T;
  cin >> S >> T;

  vector<vector<int>> dp(2001, vector<int> (2001));

  dp[0][0] = 0;

  rep(i, 0, 2001){
    dp[0][i] = 0;
    dp[i][0] = 0;
  }

  rep(i, 1, S.size()+1){
    rep(j, 1, T.size()+1){
      if(S[i-1] == T[j-1]){
        dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        dp[i][j] = max(dp[i][j], dp[i-1][j-1]+1);
      }
      else{
        dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
      }
    }
  }

  cout << dp[S.size()][T.size()] << endl;

  // rep(i, 0, S.size()+1){
  //   rep(j, 0, T.size()+1){
  //     cout <<  dp[i][j] << " ";
  //   }
  //   cout << endl;
  // }

  return 0;
}