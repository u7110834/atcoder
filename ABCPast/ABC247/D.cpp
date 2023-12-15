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

string sn(int n){
    if (n == 1) return "1";
    else return sn(n-1) + " " + to_string(n) + " " + sn(n-1);
}
int main()
{   
    int Q;
    cin >> Q;
    deque<pair<ll,ll>> deq;
    while(Q--){
        int i; cin >> i;
        if (i == 1){
            int x,c ; cin >> x >> c;
            deq.push_back(make_pair(x,c));
        } else {
            int c; cin >> c;
            ll ans = 0;
            while (c > 0){
                int xfr = deq.front().first;
                int cfr = deq.front().second;
                if (cfr <= c){
                    ans += (ll) xfr*cfr;
                    c -= cfr;
                    deq.pop_front();
                } else {
                    ans += (ll) xfr*c;
                    deq.pop_front();
                    deq.push_front(make_pair(xfr,cfr - c));
                    break;
                }
            }
            cout << ans << endl;
        } 

    }
}