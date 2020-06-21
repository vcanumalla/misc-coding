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
    string n, m; cin >> n >> m;
    vi vasya(26); 
    vi garland(26);
    for (int i = 0; i < n.length(); ++i) {
        vasya[n[i] - 'a']++;
    }
    for (int i = 0; i < m.length(); ++i) {
        garland[m[i] - 'a']++;
    }
    bool check = true;
    for (int i = 0; i < 26; ++i) {
        if (garland[i] != 0 && vasya[i] == 0) {
            check = false;
            break;
        }
    }
    if (check) {
        int sum = 0;
        for (int i = 0; i < 26; ++i) {
            sum += min(vasya[i], garland[i]);
        }
        cout << sum << nl;
    }
    else {
        cout << -1 << nl;
    }
    return 0;

}

