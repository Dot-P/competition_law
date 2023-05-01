#include <bits/stdc++.h>
using namespace std;
#include <atcoder/dsu>
using namespace atcoder;
#define rep(i, n) for (int i=0; i<n; i++)

int main(void){
  vector<int> hundred_divisor = {1,2,4,5,10,20,25,50,100};
  int A,B;
  cin >> A >> B;
  rep(i, hundred_divisor.size()){
    if(A<=hundred_divisor[i] && hundred_divisor[i]<=B){
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}