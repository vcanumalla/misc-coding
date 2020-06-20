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
        ll y, x; cin >> y >> x;
        if (y > x) {
            ll diag = y * (y-1);   
            diag++;
            if (y % 2 == 0) {
                diag += (y - x);
            }
            else {
                diag -= (y - x);
            }
            cout << diag << nl;
        }
        else if (x > y) {
            ll diag = x * (x - 1);
            diag++;
            if (x % 2 == 0) {
                diag -= (x - y);
            }
            else {
                diag += (x - y);
            }
            cout << diag << nl;
        }
        else {
            ll diag = x * (x-1);
            cout << diag + 1 << nl;
        }
    }
    return 0;

}

