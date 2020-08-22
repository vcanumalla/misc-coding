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
        vi nums(n);
        map<int, ll> digits;
        string s; cin >> s;
        for (int i = 0; i < n; ++i) {
            nums[i] = s[i] - '1';
        }
        digits[0]++;
        int curNum = 0;
        for (int i: nums) {
            curNum += i;
            digits[curNum]++;
        }
        ll finalCount = 0;
        for (auto x: digits) {
            finalCount += (x.second) * (x.second - 1) / 2;
        }
        cout << finalCount << nl;
    }
    return 0;

}

