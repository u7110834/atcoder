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

int f(int i){
    if (i == 0) return 1;
    else return i*f(i-1);
}
int dx[] = {-1,1,0,0}; int dy[] = {0,0,-1,1};
int main()
{   
    int H, W, r,c, N;
    cin >> H >> W >> r >> c >> N;
    vector<pair<int,int>> block(N);
    for (int i = 0; i < N; i++){
        int x,y;
        cin >> x >> y;
        block[i] = make_pair(x,y);
    }
    auto cmp = [&](pair<int,int> a, pair<int,int> b){
        if (a.first != b.first) return a.first < b.first;
        return a.second < b.second;
    }
    sort(all(block),comp);
    
    int Q;
    cin >> Q;
    while (Q--){
        char d;
        int l;
        cin >> d >> l;
        
    } 

}