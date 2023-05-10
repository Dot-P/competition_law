#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<n; i++)

int main(void){
  int H, W, N;
  cin >> H >> W >> N;
  vector<int> A(N);
  vector<int> B(N);
  vector<int> C(N);
  vector<int> D(N);
  rep(i, N) cin >> A[i] >> B[i] >> C[i] >> D[i];

  vector<vector<int>> ans(H+2, vector<int> (W+2, 0));

  rep(i, N){
    ans[A[i]-1][B[i]-1]++;
    ans[C[i]][D[i]]++;
    ans[A[i]-1][D[i]]--;
    ans[C[i]][B[i]-1]--;
  }

  for(int i=0; i<=H; i++){
    for(int j=1; j<=W; j++){
      ans[i][j] += ans[i][j-1];
    }
  }

  for(int i=1; i<=H; i++){
    for(int j=0; j<=W; j++){
      ans[i][j] += ans[i-1][j];
    }
  }

  for(int i=0; i<H; i++){
    for(int j=0; j<W; j++){
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
