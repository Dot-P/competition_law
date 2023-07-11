#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
  int N, H, W;
  cin >> N >> H >> W;
  vector<int> A(N);
  vector<int> B(N);
  rep(i, 0, N) cin >> A[i] >> B[i];
  rep(i, 0, N){
    A[i]--;
    B[i]--;
  }

  int XOR_sum=A[0]^B[0];
  rep(i, 1, N) XOR_sum = (XOR_sum^A[i])^B[i];

  if(XOR_sum != 0 ) cout << "First" << endl;
  else cout << "Second" << endl;

  return 0;

}