#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)
 
int main(void){
  long long int N, M, B;
  cin >> N >> M >> B;
  vector<long long int> A(N), C(M);
  rep(i, 0, N) cin >> A[i];
  rep(i, 0, M) cin >> C[i];
 
  long long int ans = B*(N*M);
  rep(i, 0, N) ans += A[i]*M;
  rep(j, 0, M) ans += C[j]*N;
 
  cout << ans << endl;
 
  return 0;
}