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
        map<pii, int> coords; 
        int x,y = 0;
        int n; cin >> n;
        string s; cin >> s;
        int l = -1;
        int r = n;
        pii cur = {0, 0};
        coords[cur] = 0;
        for (int i = 0; i < n; ++i) {
            if (s[i] == 'L') {
                cur.first--;
            }
            else if (s[i] == 'R') {
                cur.first++;
            }
            else if (s[i] == 'U') {
                cur.second++;
            }
            else {
                cur.second--;
            }

            if (coords.count(cur)) {
                if (i - coords[cur]  + 1 < r - l + 1) {
                    l = coords[cur] + 1;
                    r = i + 1;
                }
            }
            coords[cur] = i+1;
        }
        if (l == -1) {
            cout << -1 << nl;
        }
        else {
            cout << l << " " << r << nl;
        }
    }
    return 0;

}

