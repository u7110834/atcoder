#include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
// #include <cctype>
// #include <cstring>
// #include <numeric>      // std::iota
// #include <algorithm>
using namespace std;

// #include <atcoder/all>
// using namespace atcoder;

// 第一引数と第二引数を比較し、第一引数(a)をより大きい/小さい値に上書き
template <typename T> inline bool chmin(T& a, const T& b) {bool compare = a > b; if (a > b) a = b; return compare;}
template <typename T> inline bool chmax(T& a, const T& b) {bool compare = a < b; if (a < b) a = b; return compare;}

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i <= (int)(n); i++)
#define ll long long
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()

auto putline = [](string s = "========"){
    cout << s << endl;
};

int main()
{   
    int N;
    cin >> N;
    vector<int> A(N), B(N);
    rep(i,N){
        cin >> A[i];
    }
    rep(i,N){
        cin >> B[i];
    }
    int same = 0;
    int diff = 0;
    rep(i,N) rep(j,N){
        if (A[i] == B[j]){
            if (i == j){
                same++;
            } else diff++;
        }
    }

    cout << same << endl;
    cout << diff << endl;
}