#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
    int N,D;
    cin >> N >> D;
    vector<int> X(N), Y(N);
    rep(i, 0, N) cin >> X[i] >> Y[i];

    int ans = 0;
    vector<pair<int, int>> tmp;

    rep(i, 0, N){
        tmp.push_back(make_pair(X[i], Y[i]));
    }

    rep(i, 0, N){
        X[i] = tmp[i].first;
        Y[i] = tmp[i].second;
    }

    vector<int> payment;
    rep(current_day, 1, D+1){
        rep(i, 0, N){
            if(current_day == X[i]){
                payment.push_back(Y[i]);
            }
        }
      int max_num = -1;
      int max_id = -1;
      rep(i, 0, payment.size()){
        if(payment[i] > max_num){
            max_num = payment[i];
            max_id = i;
        }
      }
      if(max_id != -1){
        ans += max_num;
        payment[max_id] = 0;
      }
    }

    cout << ans << endl;

    return 0;
}