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
    int n; cin >> n;
    unordered_set<ll> encountered;
    ll needed_moves = 0;
    int bleh; cin >> bleh;
    encountered.insert(0);
    int sum = bleh;
    for (int i = 1; i < n; ++i) {
        int cur; cin >> cur;
        sum += cur;
        if (encountered.count(sum)) {
            needed_moves++;
        }
        else {
            encountered.insert(sum);
        }
    }
    cout << needed_moves;
    return 0;

}

