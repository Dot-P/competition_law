#include <bits/stdc++.h>
using namespace std;
#include <atcoder/dsu>
using namespace atcoder;
#define rep(i, n) for (int i=0; i<n; i++)

int main(void){
  int N;
  cin >> N;
  vector<int> A(N);
  vector<int> B(N);
  vector<int> C(N);
  vector<int> D(N);
  rep(i, N) cin >> A[i] >> B[i] >> C[i] >> D[i];

  vector<vector<int>> ans(1600, vector<int>(1600, 0));

  rep(i, N){
    ans[A[i]][B[i]]++;
    ans[C[i]][D[i]]++;
    ans[A[i]][D[i]]--;
    ans[C[i]][B[i]]--;
  }

  rep(i, 1600){
    for(int j=1;j<1600;j++){
      ans[i][j] += ans[i][j-1];
    }
  }

  for(int j=1;j<1600;j++){
    rep(i, 1600){
      ans[j][i] += ans[j-1][i];
    }
  }

  int count=0;
  rep(i, 1501){
    rep(j, 1501){
      if(ans[i][j]>0 ) count++;
    }
  }

  cout << count << endl;

  return 0;

}