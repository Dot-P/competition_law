#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
    int N, ret1[1 << 18], ret2[1 << 18];
    cin >> N;
    string S;
    cin >> S;

    // 答えを求める
    int streak1 = 1; ret1[0] = 1; // streak1 は「何個 A が連続したか」+ 1
    for (int i = 0; i < N - 1; i++) {
    if (S[i] == 'A') streak1 += 1;
    if (S[i] == 'B') streak1 = 1;
    ret1[i + 1] = streak1;
    }
    int streak2 = 1; ret2[N - 1] = 1; // streak2 は「何個 B が連続したか」+ 1
    for (int i = N - 2; i >= 0; i--) {
    if (S[i] == 'B') streak2 += 1;
    if (S[i] == 'A') streak2 = 1;
    ret2[i] = streak2;
    }
    // 出力
    long long Answer = 0;
    for (int i = 0; i < N; i++) Answer += max(ret1[i], ret2[i]);
    cout << Answer << endl;
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i, x, n) for (int i=x; i<n; i++)

// int main(void){
//     int N;
//     cin >> N;
//     string S;
//     cin >> S;
//     vector<int> grass_size(N);
//     grass_size[0] = 1;
//     rep(i, 0, N-1){
//         if(S[i] == 'A' && S[i+1] == 'B'){
//             int count_B = 0;
//             for(int j=i+1; S[j] == 'B'; j++){
//                 count_B++;
//             }
//             //cout << "B: " << count_B << endl;
//             grass_size[i+1] = max(grass_size[i]+1, count_B+1);
//         }
//         else if(S[i]=='A') grass_size[i+1] = grass_size[i]+1;
//         else{
//             grass_size[i+1] = grass_size[i]-1;
//         }
//     }

//     int ans=0;
//     rep(i, 0, N){
//         ans += grass_size[i];
//     }

//     // rep(i, 0, N){
//     //     cout << grass_size[i] << " ";
//     // }
//     // cout << endl;

//     cout << ans << endl;

//     return 0;
// }