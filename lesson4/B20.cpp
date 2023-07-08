#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
  string S, T;
  cin >> S >> T;
  
  S = "-" + S; 
  T = "-" + T;

  vector<vector<int>> dp(2002, vector<int> (2002));

  rep(i, 1, 2001){
    dp[i][0] = i;
    dp[0][i] = i;
  }

  rep(i, 1, S.size()+1){
    rep(j, 1, T.size()+1){
      if(S[i] == T[j]){
        dp[i][j] = min({dp[i-1][j]+1, dp[i][j-1]+1, dp[i-1][j-1]});
      }
      else{
        dp[i][j] = min({dp[i-1][j]+1, dp[i][j-1]+1, dp[i-1][j-1]+1});
      }
    }
  }

  cout << dp[S.size()][T.size()] << endl;

  // rep(i, 0, S.size()){
  //   rep(j, 0, T.size()){
  //     cout << dp[i][j] << " ";
  //   }
  //   cout << endl;
  // }

  return 0;
}