#include <bits/stdc++.h>
using namespace std;
#include <atcoder/dsu>
using namespace atcoder;
#define rep(i, n) for (int i=0; i<n; i++)

int main(void){
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  int Q;
  cin >> Q;
  vector<int> L(Q);
  vector<int> R(Q);
  rep(i ,Q) cin >> L[i] >> R[i];

  vector<int> cumulative_sum;
  int sum=0;
  cumulative_sum.push_back(0);
  rep(i , N){
    if(A[i]==1) sum++;
    cumulative_sum.push_back(sum);
  }

  rep(i, Q){
    int x = cumulative_sum[R[i]] - cumulative_sum[L[i]-1];
    if(x==R[i]-L[i]+1-x) cout << "draw" << endl;
    else if(x>R[i]-L[i]+1-x) cout << "win" << endl;
    else cout << "lose" << endl;
  }

  return 0;

}