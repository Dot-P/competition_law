#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
  long long int a,b;
  cin >> a >> b;
  long long ans = 1;

  long long int p=a;
  rep(i, 0, 60){
    long long int tmp = (1LL << i);
    if((b / tmp) % 2 == 1) ans = (ans * p) % ((int)1e9 + 7);
    p = (p * p) % ((int)1e9 + 7);
  }

  cout << ans << endl;

  return 0;
}