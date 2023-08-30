#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
    int N;
    cin >> N;
    vector<vector<int>> A(N, vector<int> (N));
    rep(i, 0, N) rep(j, 0, N) cin >> A[i][j];
    vector<int> ans;
    vector<int> T(N);

    rep(i, 0, N){
        T[i] = i;
    }

    int Q;
    cin >> Q;
    int p, x, y;
    rep(i, 0, Q){
        cin >> p >> x >> y;
        x--; y--;
        if(p == 1){
            int tmp = T[x];
            T[x] = T[y];
            T[y] = tmp;
        }
        else{
            ans.push_back(A[T[x]][y]);
        }
    }

    rep(i, 0, ans.size()){
        cout << ans[i] << endl;
    }

    return 0;
}