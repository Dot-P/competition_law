#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<n; i++)

int main(void){
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  int D;
  cin >> D;
  vector<int> L(D);
  vector<int> R(D);
  rep(i, D) cin >> L[i] >> R[i];

  vector<int> left_max(N);
  vector<int> right_max(N);
  int maxn;

  left_max[0] = A[0];
  for(int i=1; i<N; i++){
    maxn = max(left_max[i-1],A[i]);
    left_max[i] = maxn;
  }

  right_max[N-1] = A[N-1];
  for(int i=N-2; i>0; i--){
    maxn = max(right_max[i+1],A[i]);
    right_max[i] = maxn;
  }

  rep(i, D){
    L[i]--; R[i]--;
    int l,r;
    if(L[i]-1<0) l = 0;
    else l=left_max[L[i]-1];
    if(R[i]+1>=N) r = 0;
    else r = right_max[R[i]+1];
    maxn = max(l, r);
    cout << maxn << endl;
  }

  return 0;
  
}