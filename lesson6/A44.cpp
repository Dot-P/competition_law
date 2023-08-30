#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
    int N, Q;
    cin >> N >> Q;
    vector<int> ans;
    vector<int> A(N+1);
    bool flg = true;
    rep(i, 1, N+1)  A[i] = i;
    int p, x, y;

    rep(i, 0, Q){
        cin >> p;
        if(p == 1){
            cin >> x >> y;
            if(flg){
                A[x] = y;
            }
            else{
                A[N-x+1] = y;
            }
        }
        else if(p == 2){
            flg = !(flg);
        }
        else if(p == 3){
            cin >> x;
            if(flg) ans.push_back(A[x]);
            else ans.push_back(A[N-x+1]);
        }
    }

    rep(i, 0, ans.size()){
        cout << ans[i] << endl;
    }

    return 0;
}