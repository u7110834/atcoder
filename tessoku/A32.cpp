#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <cctype>
#include <cstring>
#include <numeric>      // std::iota
#include <algorithm>
#include <bitset>
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

// a^n mod を計算する using binary search
long long modpow(long long a, long long n, long long mod) {
    long long res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}

// mod. m での a の逆元 a^{-1} を計算する
// m assumed to be prime 
// Algorithm using Fermat's little theorem
long long modinv_fermat(long long a, long long mod) {
    return modpow(a, mod - 2, mod);
}

int main()
{ 
    int N, A, B;
    cin >> N >> A >> B;
    
    vector<bool> dp(N+1,0); // true if win

    // Reverse
    for (int i = 0; i <= N; i++){
        if (i - A>= 0){
            if (!dp[i-A]) dp[i] = true;
        }
        
        if (i - B>= 0){
            if (!dp[i-B]) dp[i] = true;
        }
    }
    cout << (dp[N]? "First" : "Second") << endl;
}
    