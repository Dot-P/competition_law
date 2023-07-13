#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, 0, N) cin >> A[i];
  vector<vector<int>> dp(N, vector<int> (N));

  rep(i, 0, N){
    dp[N-1][i] = A[i];
  } 

  for(int i=N-2; i>=0; i--){
    for(int j=0; j<=i; j++){
      if(i % 2 == 0) dp[i][j] = max(dp[i+1][j], dp[i+1][j+1]);
      else dp[i][j] = min(dp[i+1][j], dp[i+1][j+1]);
    }
  }

  cout << dp[0][0] << endl;

  //   rep(i, 0, N){
  //     rep(j, 0, N){
  //       cout << dp[i][j] << " ";
  //     }
  //   cout << endl;
  // }

  return 0;
}