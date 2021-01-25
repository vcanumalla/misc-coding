
#include "bits/stdc++.h"
using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vector<int> >;
using vll = vector<long long>;
using pii = pair<int, int>;
using pll = pair<long long, long long>;
using vpi = vector<pair<int, int> >;

#define F first
#define S second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()

#define FOR(i, a, b) for (int i=(a); i <=(b); i++)
#define F0R(i, a) for (int i=0; i < (a); i++)
#define RFOR(i, a, b) for (int i = (a); i >= b; i--)

const char nl = '\n';
const ll MOD = 1e9 + 7;
const ll INF = 1e18;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    ll n; cin >> n;
    ll mm = 1;
    ll num = 1;
    for (ll i = 1; i <= n; ++i) {
        num *= i;
        num %= MOD;
    }
    for (ll i = 1; i <= n -1; ++i) {
        mm *= 2;
        mm %= MOD;
    }
    cout << ((num - mm) % MOD + MOD) % MOD << nl;
    return 0;
    

}

