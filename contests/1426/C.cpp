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
    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        ll pastSquare = 1;
        ll pastNum = 1;
        ll pastDif = n - 1;
        for (ll i = 2; i <= 31623; ++i) {
            ll curDif = abs(n - (i * i));   
            if (curDif <= pastDif) {
                pastDif = curDif;
                pastSquare = i * i;
                pastNum = i;
            }
            else {
                break;
            }
        }
        ll total = pastNum - 1;
        ll ceil = ( (n + pastNum - 1) / pastNum);
        cout <<  total + ceil - 1 << nl;
    }
    return 0;

}

