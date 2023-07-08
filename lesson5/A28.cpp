#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
  int N;
  cin >> N;
  vector<char> T(N);
  vector<int> A(N);

  rep(i, 0, N){
    cin >> T[i];
    cin >> A[i];
  }

  int ans=0;

  rep(i, 0, N){
    if(T[i] == '+') ans += A[i];
    if(T[i] == '-') ans -= A[i];
    if(T[i] == '*') ans *= A[i];
    ans = ans % 10000;
    if(ans < 0) ans += 10000;
    cout << ans << endl;
  }

  return 0;
}