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
    int n, m;
    ll k;
    cin >> n >> m >> k;
    vll apts(n);
    for (int i = 0; i < n; ++i) {
        cin >> apts[i];
    }
    sort(apts.begin(), apts.end());
    int count = 0;
    vll users(m);
    for (int i = 0; i < m; ++i) {
        cin >> users[i];
    }
    sort(users.begin(), users.end());
    // cout << nl << nl;
    // for (ll i: apts) {
    //     cout << i << " ";
    // }
    // cout << nl;
    // for (ll i: users) {
    //     cout << i << " ";
    // }
    // cout << nl << nl;
    int j = 0;
    for (int i = 0; i < m; ++i) {
        ll val = users[i];
        for (; j < apts.size(); ++j) {
            ll apt = apts[j];
            // cout << val << " " << apt << nl;
            if (apt >= val - k && apt <= val + k) {
                count++;
                j++;
                break;
            } 
            else if (apt > val + k) {
                break;
            }
            else if (apt < val - k) {
            }
        }
    }
    cout << count << nl;
    return 0;
}

