#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
    int N;
    cin >> N;
    vector<long long int> A(N);
    rep(i, 0, N) cin >> A[i];

    vector<int> number_of_bar(102, 0);

    rep(i, 0, N){
        number_of_bar[A[i]]++;
    }

    long long int ans = 0;

    rep(i, 0, 102){
        if(number_of_bar[i]>=3){
            long long int n = number_of_bar[i];
            ans += n * (n-1) * (n-2) / 6;
        }
    }

    cout << ans << endl;
    return 0;
}