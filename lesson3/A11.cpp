#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/dsu>
// using namespace atcoder;
#define rep(i, n) for (int i=0; i<n; i++)

int main(void){
  int N,X;
  cin >> N >> X;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  sort(A.begin(), A.end());
  int pos = lower_bound(A.begin(), A.end(), X) - A.begin();
  if(pos<=N && A[pos]==X){
    cout << pos+1 << endl;
    return 0;
  }
  return -1;
}

// #include <bits/stdc++.h>
// using namespace std;
// // #include <atcoder/dsu>
// // using namespace atcoder;
// #define rep(i, n) for (int i=0; i<n; i++)

// int main(void){
//   int N, X;
//   cin >> N >> X;
//   vector<int> A(N);
//   rep(i, N) cin >> A[i];

//   int l=1;
//   int r=N;
//   while(1){
//     int m = (l + r) / 2;
//     if(X<A[m]){
//       r = m-1;
//     }
//     else if(X>A[m]){
//       l = m+1;
//     }
//     else{
//       cout << m+1 << endl;
//       break;
//     }
//   }

//   return 0;
// }