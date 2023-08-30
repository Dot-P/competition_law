#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int getscore(int N, int K, vector<int> A, vector<int> B, int score1, int score2){
    int score = 0;
    rep(i, 0, N){
        if(A[i]>=score1 & A[i]<=score1+K & B[i]>=score2 & B[i]<=score2+K){
            score++;
        }
    }
    return score;
}

int main(void){
    int N, K;
    cin >> N >> K;
    vector<int> A(N), B(N);
    rep(i, 0, N) cin >> A[i] >> B[i];


    int ans = 0;
    rep(i, 1, 101){
        rep(j, 1, 101){
            ans = max(getscore(N, K, A, B, i, j), ans);
        }
    }

    cout << ans << endl;

    return 0;
}