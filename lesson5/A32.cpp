#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
  int N;
  int A,B;
  cin >> N >> A >> B;

  vector<bool> dp(100001, false);
  rep(i, 0, N+1){
    if(i-A>=0 && dp[i-A] == false) dp[i] = true;
    else if(i-B>=0 && dp[i-B] == false) dp[i] = true;
    else dp[i] = false;

    return 0;
  }

  if(dp[N] == true) cout << "First" << endl;
  else cout << "Second" << endl;
}