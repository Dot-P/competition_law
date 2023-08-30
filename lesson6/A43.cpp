#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
    int N, L;
    cin >> N  >> L;
    vector<int> A(N);
    vector<char> B(N);
    rep(i, 0, N) cin >> A[i] >> B[i];

    int ans = 0;
    rep(i, 0, N){
        if(B[i]=='E') ans = max(ans, L-A[i]);
        else ans = max(ans, A[i]);
    }

    cout << ans << endl;

    return 0;
}