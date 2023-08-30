#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
    int N, M;
    cin >> N >> M;
    vector<int> A(M);
    rep(i, 0, M) cin >> A[i];
    vector<int> wrong_ans(200001, 0);

    rep(i, 0, M){
        wrong_ans[A[i]]++;
    }

    rep(i, 1, N+1){
        cout << M - wrong_ans[i] << endl;
    }

    return 0;
}