#include <bits/stdc++.h>
using namespace std;
#include <atcoder/dsu>
using namespace atcoder;
#define rep(i, n) for (int i=0; i<n; i++)

int main(void){
  bitset<8> num;
  cin >> num;
  cout << num.to_ulong() << endl;
  return 0;
}