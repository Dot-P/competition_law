#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

long long int gcd(long long int A,long long int B){
  while(A>=1 && B>=1){
    if(A >= B) A = A % B;
    else B = B % A;
  }
  if(A == 0) return B;
  else return A;
}

long long int lcm(long long int A,long long int B){
  return A*B/gcd(A, B);
}

int main(void){
  long long int A, B;
  cin >> A >> B;
  cout << lcm(A, B) << endl;
}