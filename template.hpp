#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <ranges>
using namespace std;
namespace rng = std::ranges;
namespace vw = std::views;
using ll = long long;

// chmax, chmin
template <class T>
inline bool chmax(T& a, T b) {
  if (a < b) {
    a = b;
    return true;
  }
  return false;
}
template <class T>
inline bool chmin(T& a, T b) {
  if (a > b) {
    a = b;
    return true;
  }
  return false;
}

// Union-Find
struct UnionFind {
  vector<ll> par;  // par[i]:iの親の番号　(例) par[3] = 2 : 3の親が2

  UnionFind(ll N) : par(N) {  // 最初は全てが根であるとして初期化
    for (ll i = 0; i < N; i++)
      par[i] = i;
  }

  ll root(ll x) {  // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
    if (par[x] == x)
      return x;
    return par[x] = root(par[x]);
  }

  void unite(ll x, ll y) {  // xとyの木を併合
    ll rx = root(x);        // xの根をrx
    ll ry = root(y);        // yの根をry
    if (rx == ry)
      return;      // xとyの根が同じ(=同じ木にある)時はそのまま
    par[rx] = ry;  // xとyの根が同じでない(=同じ木にない)時：xの根rxをyの根ryにつける
  }

  bool same(ll x, ll y) {  // 2つのデータx, yが属する木が同じならtrueを返す
    ll rx = root(x);
    ll ry = root(y);
    return rx == ry;
  }
};

// powmod
ll powmod(ll a, ll n, ll mod) {
  ll res = 1;
  a %= mod;
  while (n > 0) {
    if (n & 1) {
      res = res * a % mod;
    }
    a = a * a % mod;
    n >>= 1;
  }
  return res;
}

// 逆元(フェルマーの小定理を使う)
ll gyakugen(ll a, ll mod) {
  return powmod(a, mod - 2, mod);
}

// 階乗の計算
ll kaizyo(ll n, ll mod) {  // n!の計算
  ll res = 1;
  for (ll i = 1; i <= n; ++i) {
    res = (res * i) % mod;
  }
  return res;
}