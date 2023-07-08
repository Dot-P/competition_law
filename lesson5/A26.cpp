#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
  int Q;
  cin >> Q;
  vector<int> X(Q);
  rep(i, 0, Q) cin >> X[i];

  rep(j, 0, Q){
    // cout << j << endl;
    int skip = 0;
    for(int i=2; i*i <=X[j]; i++){
      if(X[j] % i == 0){
        cout << "No" << endl;
        // cout << i << endl;
        skip = 1;
        break;
      }
    }
    if(skip == 0) cout << "Yes" << endl;
  }

  return 0;
}