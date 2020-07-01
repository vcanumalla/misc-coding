#include <bits/stdc++.h>
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
    cin >> n >> m;
    vll prices(n);
    vll customers(m);
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> customers[i];
    }
    sort(prices.begin(), prices.end());
    // cout << nl;
    // for (int i = 0; i < n; ++i) {
    //     cout << prices[i] << " ";
    // }
    // cout << nl;
    for (ll num: customers) {
        if (num < prices[0] || prices.size() == 0) {
            cout << "-1" << nl;
        }
        else {
            RFOR(i, prices.size() -1, 0) {
                if (prices[i] > num) {
                    continue;
                }
                else {
                    cout << prices[i] << nl;
                    prices.erase(prices.begin() + i);
                    break;
                }
            }
        }
    }
    return 0;

}

