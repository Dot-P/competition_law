#include <bits/stdc++.h>
using namespace std;
#include <atcoder/dsu>
using namespace atcoder;
#define rep(i, x, n) for (int i=x; i<n; i++)

double f(double x){
  return x*x*x + x;
}
int main(void){
  int N;
  cin >> N;
  double m = -1;
  double l = 0;
  double r = 1000;
  while(abs(f(m)-N)>0.0001){
    m = (l + r) / 2;
    if(f(m)>=N) r = m;
    else l = m;
  }

  cout << m << endl;

  return 0;
}