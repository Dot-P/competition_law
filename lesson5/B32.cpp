#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
  int N,K;
  cin >> N >> K;
  vector<int> a(K);
  rep(i, 0, K) cin >> a[i];

  vector<bool> dp(100001, false);

  rep(i, 0, N+1){

    rep(j, 0, K){
    if(i-a[j]>=0 && dp[i-a[j]] == false) dp[i] = true;
    }

  }

  if(dp[N] == true) cout << "First" << endl;
  else cout << "Second" << endl;

  return 0;
}