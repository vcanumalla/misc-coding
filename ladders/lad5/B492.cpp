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
    ll n, l; cin >> n >> l;
    vll lanterns(n);
    for (int i = 0; i < n; ++i) {
        cin >> lanterns[i];
    }
    sort(lanterns.begin(), lanterns.end());
    long double border1 = lanterns[0];
    long double border2 = l - lanterns[lanterns.size() - 1];
    long double maxGap = 0;
    for (int i = 1; i < n -2; ++i) {
        long double gap = lanterns[i+1] - lanterns[i];
        maxGap = max(gap, maxGap);
    }
    long double trueGap = maxGap / 2.;
    long double border = max(border1, border2);
    cout << max(trueGap , border) << nl;
    return 0;

}

