#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
  int N;
  cin >> N;
  vector<int> B(N+1);
  rep(i, 1, N+1) cin >> B[i];

  vector<int> dp(N+1);

  dp[1] = 0;
  dp[2] = abs(B[2]-B[1]);
  rep(i, 3, N+1){
    dp[i] = min(dp[i-1]+abs(B[i]-B[i-1]), dp[i-2]+abs(B[i]-B[i-2]));
  }
  cout << dp[N] << endl;

  return 0;
}