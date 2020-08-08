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
        int n; cin >> n;
        vll candies(n);
        vll oranges(n);
        vll changes(n);
        for (int i = 0; i < n; ++i) {
            cin >> candies[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> oranges[i];
        }
        ll cMin = *min_element(candies.begin(), candies.end());
        ll oMin = *min_element(oranges.begin(), oranges.end());
        for (int i = 0; i < n; ++i) {
            changes[i] = candies[i] - cMin;
        }
        ll base = 0;
        for (int i = 0; i < n; ++i) {
            changes[i] += max(oranges[i] - oMin - changes[i], base);
        }
        ll sum = 0;
        for (int i: changes) {
            sum += i;
        }
        cout << sum << nl;
    }
    return 0;

}

