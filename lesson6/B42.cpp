#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
    int N;
    cin >> N;
    vector<int> A(N), B(N);
    rep(i, 0, N) cin >> A[i] >> B[i];

    long long int tmp1 = 0;
    rep(i, 0, N){
        int add = A[i]+B[i];
        if(add>0) tmp1 += add;
    }

    long long int tmp2 = 0;
    rep(i, 0, N){
        int add = A[i]-B[i];
        if(add>0) tmp2 += add;
    }

    long long int tmp3 = 0;
    rep(i, 0, N){
        int add = -1 * A[i] + B[i];
        if(add>0) tmp3 += add;
    }

    long long int tmp4 = 0;
    rep(i, 0, N){
        int add = -1 * A[i] - B[i];
        if(add>0) tmp4 += add;
    }
    
    long long int ans = max({tmp1, tmp2, tmp3, tmp4});

    cout << ans << endl;

    return 0;
}