#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
  int N;
  cin >> N;
  vector<int> A(N+1);
  vector<int> B(N+1);

  rep(i, 2, N+1) cin >> A[i];
  rep(i, 3, N+1) cin >> B[i];

  vector<int> dp(N+1);

  dp[1] = 0;
  dp[2] = A[2];

  rep(i, 3, N+1){
    dp[i] = min(dp[i-1]+A[i], dp[i-2]+B[i]);
  }

  vector<int> ans;

  ans.push_back(N+1);
  int j = N;

  while(j>=2){
    if(dp[j-1]+A[j]==dp[j]){
      ans.push_back(j);
      j--;
    }
    else{
      ans.push_back(j-1);
      j -= 2;
    }
  }

  cout << ans.size() << endl;
  for(int k=ans.size()-1; k>=0; k--){
    cout << ans[k]-1;
    if(k != 0 ) cout << " ";
  }
  cout << endl;

  return 0;
}