#include <iostream>
using namespace std;

long long N, K;
long long A[100009];

// 答えが x 以下かを判定し、Yes であれば true、No であれば false を返す
bool check(long long x) {
	long long sum = 0;
	for (int i = 1; i <= N; i++) sum += x / A[i]; //「x ÷ A[i]」の小数点以下切り捨て
	if (sum >= K) return true;
	return false;
}

int main() {
	// 入力
	cin >> N >> K;
	for (int i = 1; i <= N; i++) cin >> A[i];

	// 二分探索
	// Left は探索範囲の左端を、Right は探索範囲の右端を表す
	long long Left = 1, Right = 1'000'000'000;
	while (Left < Right) {
		long long Mid = (Left + Right) / 2;
		bool Answer = check(Mid);
		if (Answer == false) Left = Mid + 1; // 答えが Mid+1 以上であることが分かる
		if (Answer == true) Right = Mid; // 答えが Mid 以下であることが分かる
	}

	// 出力（このとき Left=Right になっている）
	cout << Left << endl;
	return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// #include <atcoder/dsu>
// using namespace atcoder;
// #define rep(i, x, n) for (int i=x; i<n; i++)

// int main(void){
//   int N, K;
//   cin >> N >> K;
//   vector<int> A(N);
//   rep(i, 1, N+1) cin >> A[i];

//   int l=1;
//   int r=100000000;
//   int m;
//   while(l<r){
//     m = (l+r) / 2;
//     int sum=0;
//     rep(i, 1, N+1) sum += (m/i);
//     if(sum>=K) r = m;
//     else if(sum<K) l = m + 1;
//   }
//   cout << r << endl;

//   return 0;
// }