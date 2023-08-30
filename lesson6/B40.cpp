#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, 0, N) cin >> A[i];

    vector<long long int> mod_seq(100);
    rep(i, 0, N) mod_seq[A[i]%100]++;

    long long int ans = 0;
    rep(i, 1, 50){
        ans += mod_seq[i] * mod_seq[100-i]; 
    }

    ans += mod_seq[0] * (mod_seq[0]-1) / 2;
    ans += mod_seq[50] * (mod_seq[50]-1) / 2;

    cout << ans << endl;

    return 0;
}