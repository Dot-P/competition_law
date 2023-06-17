#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
  int N,S;
  cin >> N >> S;
  vector<int> A(N+1);
  rep(i, 1, N+1) cin >> A[i];
  vector<vector<int>> dp(N+1, vector<int> (S+1, 0));

  rep(i, 0, S+1){
    if(i != 0) dp[0][i] = 0;
    else dp[0][i] = 1;
  }

  rep(i, 1, N+1){
    rep(j, 0, S+1){
      if(dp[i-1][j]==1) dp[i][j] = 1;
      if(j-A[i] >= 0 && dp[i-1][j-A[i]]==1) dp[i][j] = 1;
    }
  }

  vector<int> ans;

  int k = S;

  for(int j=N; j>=1; j--){
    if(dp[j-1][k]==0){
      ans.push_back(j);
      k -= A[j];
      if(k<0) break;
    }
  }

  if(dp[N][S]==1){
    cout << ans.size() << endl;
    for(int j=ans.size()-1; j>=0; j--){
      cout << ans[j] << " ";
    }
    cout << endl;
  }
  else cout << -1 << endl;

  // rep(i, 0, N+1){
  //   rep(j, 0, S+1){
  //     cout << dp[i][j] << " ";
  //   }
  //   cout << endl;
  // }

  return 0;
}