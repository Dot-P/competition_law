#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
  int N, X, Y;
  cin >> N >> X >> Y;
  vector<int> A(N);
  rep(i, 0, N) cin >> A[i];
  vector<int> grundy(100001);

  rep(i, 0, 100001){
    bool Transmit[3] = {false, false, false};
    if( i - X >= 0 ) Transmit[grundy[i-X]] = true;
    if( i - Y >= 0 ) Transmit[grundy[i-Y]] = true;
    if( Transmit[0] == false ) grundy[i] = 0;
    else if( Transmit[1] == false ) grundy[i] = 1;
    else grundy[i] = 2;
  }

  int XOR_sum = 0;
  rep(i, 0, N) XOR_sum = (XOR_sum ^ grundy[A[i]]);

  if(XOR_sum != 0) cout << "First" << endl;
  else cout << "Second" << endl;

  return 0;

}