#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
    int N;
    cin >> N;
    vector<int> L(N), R(N);
    rep(i, 0, N) cin >> L[i] >> R[i];

    vector<pair<int, int>> tmp;

    rep(i, 0, N){
        tmp.push_back(make_pair(R[i], L[i]));
    }
    sort(tmp.begin(), tmp.end());

    rep(i, 0, N){
        R[i] = tmp[i].first;
        L[i] = tmp[i].second;
    }

    int current_time = 0;
    int ans = 0;
    rep(i, 0, N){
        if(current_time <= L[i] ){
            current_time = R[i];
            ans ++;
        }
    }
    
    cout << ans << endl;

    return 0;
}