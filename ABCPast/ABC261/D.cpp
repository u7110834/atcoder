#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cctype>
#include <cstring>
#include <numeric>      // std::iota
#include <algorithm>
using namespace std;

// #include <atcoder/all>
// using namespace atcoder;

// 第一引数と第二引数を比較し、第一引数(a)をより大きい/小さい値に上書き
template <typename T> inline bool chmin(T& a, const T& b) {bool compare = a > b; if (a > b) a = b; return compare;}
template <typename T> inline bool chmax(T& a, const T& b) {bool compare = a < b; if (a < b) a = b; return compare;}

/* accelration */
// 高速バイナリ生成
// #pragma GCC target("avx")
// #pragma GCC optimize("O3")
// #pragma GCC optimize("unroll-loops")

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
    int N, M;
    cin >> N >> M;
    vector<ll> X(N+1),Y(N+1,0);
    rep1(i,N) cin >> X[i];
    rep1(i,M) {
        ll c,y;
        cin >> c >> y;
        Y[c] = y;
    }
    vector<vector<ll>> dp(N+1, vector<ll>(N+1,0));
    // i = 1... Nth step
    // dp[i][s] sth streak dp[i][0] if heads 
    // dp[i][0] = max dp[i-1][j], j = 0...i-1
    // if i >= s > 0, dp[i][s] = dp[i][i-1] 
    ll cur_mx = 0;
    for (int i = 1; i <= N; i++){
        dp[i][0] = cur_mx;
        cur_mx = 0;
        for (int b = 1; b <= i; b++){
            dp[i][b] = (ll) dp[i-1][b-1] + Y[b] + X[i];
            // update cur_mx
            chmax(cur_mx, dp[i][b]);
        }   
    }

    cout << *(max_element(dp[N].begin(),dp[N].end())) << endl;
}