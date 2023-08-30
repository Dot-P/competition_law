#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
    int X, Y;
    cin >> X >> Y;

    int K = 0;
    vector<pair<int, int>> ans_pair;
 
    while(!(X == 1 & Y == 1)){
        ans_pair.push_back(make_pair(X, Y));
        if(X > Y) X = X - Y;
        else Y = Y - X;
        K ++;
    }

    cout << K << endl;

    for(int i=ans_pair.size()-1; i>=0; i--){
        cout << ans_pair[i].first << " " << ans_pair[i].second << endl;
    }

    return 0;
}