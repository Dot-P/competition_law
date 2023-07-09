#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
  long long int N;
  cin >> N;
  cout << (N/3) + (N/5) - (N/15) << endl;
  return 0;
}