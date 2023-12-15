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

#define mod 998244353
#define inv2 499122177
long long triangular_number(long long x){
  x%=mod;
  long long res=x;
  res*=(x+1);res%=mod;
  res*=inv2;res%=mod;
  return res;
}
int main(){
  long long n;
  cin >> n;
  
  long long res=0;
  long long p10=10;
  for(int dg=1;dg<=18;dg++){
    long long l=p10/10;
    long long r=min(n,p10-1);
    if(l<=r){res+=triangular_number(r-l+1);res%=mod;}
    p10*=10;
  }
  
  cout << res << '\n';
  return 0;
}