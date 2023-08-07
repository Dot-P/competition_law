#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)
 
int main(void){
  int N,K;
  cin >> N >> K;
  string S;
  cin >> S;
  int on_count = 0;
  rep(i, 0, N){
    if(S[i] == '1') on_count++;
  }
  if(abs(on_count-K)%2==0) cout << "Yes" << endl;
  else cout << "No" << endl;
 
  return 0;
}