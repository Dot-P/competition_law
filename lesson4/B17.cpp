#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
  int N;
  cin >> N;
  vector<int> h(N+1);
  rep(i, 1, N+1) cin >> h[i];

  vector<int> dp(N+1);

  dp[1] = 0;
  dp[2] = abs(h[2]-h[1]);

  rep(i, 3, N+1){
    dp[i] = min(dp[i-1]+abs(h[i]-h[i-1]), dp[i-2]+abs(h[i]-h[i-2]));
  }

  vector<int> ans;
  ans.push_back(N);

  int j = N;

  while(j>=2){
    if(dp[j-1]+abs(h[j]-h[j-1])==dp[j]){
      j--;
      ans.push_back(j);
    }
    else{
      j -= 2;
      ans.push_back(j);
    }
  }

  cout << ans.size() << endl;
  for(int j=ans.size()-1; j>=0; j--){
    cout << ans[j] << " ";
  }
  cout << endl;

  return 0;
}