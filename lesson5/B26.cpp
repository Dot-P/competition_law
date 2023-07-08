#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
  int N;
  cin >> N;
  vector<bool> isNotPrime(1000001, false);

  for(int i=2; i*i<=N ; i++){
    if(isNotPrime[i] == true) continue;
    for(int j=2*i; j<=N; j+=i) isNotPrime[j] = true;
  }

  rep(i, 2, N+1){
    if(isNotPrime[i] == false) cout << i << endl;
  }
  return 0;
}