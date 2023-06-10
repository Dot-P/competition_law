#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, n) for (int i=x; i<n; i++)

int main(void){
  int N;
  int tmp;
  cin >> N;
  vector<int> A(N);
  vector<int> A_no_duplicate;

  rep(i, 0, N){
    cin >> A[i];
    A_no_duplicate.push_back(A[i]);
  }

  sort(A_no_duplicate.begin(), A_no_duplicate.end());

  A_no_duplicate.erase(unique(A_no_duplicate.begin(), A_no_duplicate.end()), A_no_duplicate.end());

  // rep(i, 0, A_no_duplicate.size()){
  //   cout << A_no_duplicate[i] << " ";
  // }
  // cout << endl;

  rep(i, 0, N){
    int pos = lower_bound(A_no_duplicate.begin(), A_no_duplicate.end(), A[i]) - A_no_duplicate.begin();
    cout << pos+1 << " ";
  }
  cout << endl;

  return 0;

}

// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i, x, n) for (int i=x; i<n; i++)

// int main(void){
//   int N;
//   int tmp;
//   cin >> N;
//   vector<int> A(N);
//   vector<int> A_no_duplicate;

//   rep(i, 0, N){
//     cin >> A[i];
//   }

//   rep(i, 0, N){

//     tmp = A[i];

//     sort(A_no_duplicate.begin(), A_no_duplicate.end());

//     int pos = lower_bound(A_no_duplicate.begin(), A_no_duplicate.end(), tmp) - A_no_duplicate.begin();

//     if(!(pos<A_no_duplicate.size() && A_no_duplicate[pos] == tmp)){
//       A_no_duplicate.push_back(tmp);
//     }
//   }

//   sort(A_no_duplicate.begin(), A_no_duplicate.end());

//   // rep(i, 0, A_no_duplicate.size()){
//   //   cout << A_no_duplicate[i] << " ";
//   // }
//   // cout << endl;

//   rep(i, 0, N){
//     int pos = lower_bound(A_no_duplicate.begin(), A_no_duplicate.end(), A[i]) - A_no_duplicate.begin();
//     cout << pos+1 << " ";
//   }
//   cout << endl;

//   return 0;

// }