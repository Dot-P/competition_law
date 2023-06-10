#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
  int N,K;
  cin >> N >> K;
  vector<int> A(N);
  rep(i,0,N){
    cin >> A[i];
  }

  int A1_size = N/2;
  int A2_size = N - A1_size;
  
  vector<int> A1(A1_size);
  vector<int> A2(A2_size);
  vector<int> G1;
  vector<int> G2;

  rep(i,0,A1_size){
    A1[i] = A[i];
  }
  rep(i,0,A2_size){
    A2[i] = A[i+A1_size];
  }

  rep(i, 0, 1<<A1_size){
    int num = 1;
    int sum = 0;
    int bitset[A1_size];
    rep(j, 0, A1_size){
      bitset[j] = i / num % 2;
      num *= 2;
      if(bitset[j] == 1) sum += A1[j];
    }
    G1.push_back(sum);
  }

  rep(i, 0, 1<<A2_size){
    int num = 1;
    int sum = 0;
    int bitset[A2_size];
    rep(j, 0, A2_size){
      bitset[j] = i / num % 2;
      num *= 2;
      if(bitset[j] == 1) sum += A2[j];
    }
    G2.push_back(sum);
  }

  sort(G2.begin(), G2.end());

  // rep(i, 0, G1.size()){
  //   cout << G1[i] << " ";
  // }
  // cout << endl;
  // rep(i, 0, G2.size()){
  //   cout << G2[i] << " ";
  // }
  // cout << endl;

  rep(i, 0, G1.size()){
    int pos = lower_bound(G2.begin(), G2.end(), K-G1[i]) - G2.begin();
    if(G2[pos] == K-G1[i] && pos < G2.size()){
      //cout << "pos:" << pos << endl;
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}