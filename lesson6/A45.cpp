#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
    int N;
    char C;
    cin >> N >> C;
    string S;
    cin >> S;

    int hand_card, score;
    
    if(C=='W') hand_card = 0;
    else if(C=='B') hand_card = 1;
    else hand_card = 2;

    rep(i, 0, N){
        if(S[i] == 'B') score += 1;
        else if(S[i] == 'R') score += 2;
        score = score % 3;
    }

    if(hand_card == score) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}