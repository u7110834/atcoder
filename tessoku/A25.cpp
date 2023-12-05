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
    int H, W;
    cin >> H >> W;
    vector<string> grid(H);
    vector<vector<ll>> cnt(H,vector<ll>(W,0));
    rep(i,H) cin >> grid[i];
    cnt[0][0] = 1LL;
    for (int j = 0; j < W; j++){
        for (int i = 0 ; i < H; i++){
            if (grid[i][j] == '.'){
                if (i != 0) cnt[i][j] += cnt[i-1][j];
                if (j != 0) cnt[i][j] += cnt[i][j-1];
            }
            else cnt[i][j] = 0; 
        }
    }
    cout << cnt[H-1][W-1] << endl;
    
}