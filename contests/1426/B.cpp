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
        bool check = false;
        int n, m; cin >> n >> m;
        if (m % 2 == 0) {
            for (int i = 0; i <n; ++i) {
                int tl, tr, bl, br; cin >> tl >> tr >> bl >> br;
                if (bl == tr) {
                    check = true;
//                    cout << tl << " " << tr << nl << bl << " " << br << nl << nl << nl;
                }
            }
            if (check) {
                cout << "YES\n";
                continue;
            }
            else {
                cout << "NO" << nl;
                continue;
            }
        }
        else {
            for (int i = 0; i < n; ++i) {
                int a, b, c,d; cin >> a >> b >> c >> d;

            }
            cout << "NO" <<nl;
            continue;
        }
    }
    return 0;

}

