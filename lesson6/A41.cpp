#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
    int N;
    cin >> N;
    string S;
    cin >> S;

    int blue = 0, red = 0;
    rep(i, 0, N){
        if(S[i] == 'B'){
            blue++;
            red = 0;
        }
        else{
            red++;
            blue = 0;
        }
        if(red >= 3 | blue >= 3){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}