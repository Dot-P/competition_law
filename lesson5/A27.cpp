#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int gcd(int A, int B){
  while(A>=1 && B>=1){
    if(A >= B){
      A = A % B;
    }
    else B = B % A;
  }
  if(A == 0) return B;
  else return A;
}

int main(void){
  int A, B;
  cin >> A >> B;

  cout << gcd(A, B) << endl;  

  return 0;
}