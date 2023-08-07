#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
    int D,N;
    cin >> D >> N;
    vector<int> L(N), R(N), H(N);
    rep(i, 0, N) cin >> L[i] >> R[i] >> H[i];

    int ans = 0;
    vector<int> max_hour(D+1, 24);
    rep(i, 0, N){
        rep(j, L[i], R[i]+1){
            if(max_hour[j] > H[i]) max_hour[j] = H[i];
        }
    }

    rep(i, 1, D+1){
        ans += max_hour[i]; 
    }

    cout << ans << endl;
}