#include <iostream>
#include <algorithm>
using namespace std;
 
int N, A[100009];
int Q, X[100009];
 
int main() {
	// 入力
	cin >> N;
	for (int i = 1; i <= N; i++) cin >> A[i];
	cin >> Q;
	for (int i = 1; i <= Q; i++) cin >> X[i];
 
	// 配列 X をソート
	sort(A + 1, A + N + 1);
 
	// 質問に答える
	for (int i = 1; i <= Q; i++) {
		int pos1 = lower_bound(A + 1, A + N + 1, X[i]) - A;
		cout << pos1 - 1 << endl;
	}
	return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/dsu>
// using namespace atcoder;
// #define rep(i, x, n) for (int i=x; i<n; i++)

// int find_num(int N, vector<int> &A, int X){
//     int l=1;
//     int r=N;
//     while(l <= r){
//       int m = (l + r) / 2;
//       if(A[m]<X) l = m + 1;
//       else if(A[m]>X) r = m - 1;
//       else{
//         return m;
//       }
//     }
//   return -1;
// }

// int main(void){
//   int N, Q;
//   cin >> N;
//   vector<int> A(N, 0);
//   rep(i, 0, N) cin >> A[i];
//   cin >> Q;
//   vector<int> X(Q);
//   rep(i, 1, Q+1) cin >> X[i];
  
//   int num;
  
//   rep(i, 1, Q+1){
//       A.push_back(X[i]);
//       sort(A.begin(), A.end());
//       num = find_num(N, A, X[i]);
//       while(X[num+1]==X[num]){
//         num--;
//       }
//       cout << num << endl;
//       A[num] = -1;
//       A.erase(remove(A.begin(), A.end(), -1), A.end());
//   }

//   return 0;
// }