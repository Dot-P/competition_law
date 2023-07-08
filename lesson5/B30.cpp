#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int power(long long int a, long long int b){
  long long ans = 1;
  long long int p=a;

  rep(i, 0, 30){
    int tmp = (1 << i);
    if((b / tmp) % 2 == 1) ans = (ans * p) % ((int)1e9 + 7);
    p = (p * p) % ((int)1e9 + 7);
  }

  return ans;
}

int combination(long long int n, long long int r){
  long long int a,b;
  long long int M = 1e9 + 7;
  a = 1; b = 1;
  rep(i, 1, n+1) a = (a * i) % M;
  rep(i, 1, r+1) b = (b * i) % M;
  rep(i, 1, n-r+1) b= (b * i) % M;

  return (a * power(b, M-2)) % M ;
}

int main(void){
  long long int H,W;
  cin >> H >> W;
  cout << combination(H+W-2, H-1) << endl;
  return 0;
}