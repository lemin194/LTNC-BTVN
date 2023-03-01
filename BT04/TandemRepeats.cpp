#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
#pragma GCC optimize ("unroll-loops")
using namespace std;
using ll = signed long long int;

constexpr size_t nmax = 1e5 + 15;

const ll MOD = 1e9 + 7;

const ll base = 9791327;

ll n, m;
string s; 
ll chash[nmax];
ll pow_base[nmax];

ll _pow(ll x, ll e) {
    if (e < 1) return 1;
    ll p = _pow(x, e / 2);
    return ((p * p) % MOD) * (e % 2 ? x : 1) % MOD;
}

void prep() {
    pow_base[0] = 1;
    for (ll i = 1; i < nmax; i++) {
        pow_base[i] = pow_base[i - 1] * base % MOD;
    }
    chash[0] = s[0] % MOD;
    for (ll i = 1; i < n; i++) {
        chash[i] = (chash[i - 1] * base) + s[i];
        chash[i] %= MOD;
    }
}

ll ghash(ll l, ll r) {
    if (l == 0) return chash[r];
    return ((chash[r] - chash[l - 1] * pow_base[r - l + 1]) % MOD + MOD) % MOD;
}

void solve() {
    cin >> n >> m;
    cin >> s;
    prep();
    while (m--) {
        ll first, last; cin >> first >> last;
        first --;
        last--;
        ll len = last - first + 1;
        ll res = 1, l = 2, r = nmax;
        while (l <= r) {
            ll mid = (l + r) / 2;
            if (mid * len + first > n) {
                r = mid - 1;
                continue;
            }
            int check = 1;
            ll rhs = ghash(first, first + mid * len - 1);
            ll lhs = (ghash(first, last) * (pow_base[mid * len] - 1)) % MOD;
            lhs = (lhs * _pow(pow_base[len] - 1, MOD - 2)) % MOD;
            check = lhs == rhs;
            // for (ll i = res * len + first; i < mid * len + first; i++) {
            //     if (s[i] != s[first + (i - first) % len]) {
            //         check = 0;
            //         break;
            //     }
            // }
            if (check) {
                res = mid;
                l = mid + 1;
                continue;
            }
            r = mid - 1;
        }

        cout << res << "\n";
    }
}
int main() {
    solve();
    return 0;
}