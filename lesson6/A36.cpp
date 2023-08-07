#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)
 
int main(void){
  int N, K;
  cin >> N >> K;
  if(K%2==0 && K-(2*N-2)>=0) cout << "Yes" << endl;
  else cout << "No" << endl;
 
  return 0;
}
