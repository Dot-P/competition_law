#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
  int N;
  cin >> N;
  vector<long long int> a(N+1);

  a[0] = 0;
  a[1] = 1;
  a[2] = 1;
  rep(i, 3, N+1){
    a[i] = (a[i-1] + a[i-2]) % ((int)1e9 + 7);
  }

  cout << a[N] << endl;

  return 0;
}