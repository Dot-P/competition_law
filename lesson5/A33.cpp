#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
  int N;
  cin >> N;
  vector<int> a(N);
  rep(i, 0, N) cin >> a[i];

  int XOR_sum = a[0];

  rep(i, 1, N) XOR_sum = (XOR_sum ^ a[i]);

  if(XOR_sum == 0) cout << "Second" << endl;
  else cout << "First" << endl;

  return 0;

}