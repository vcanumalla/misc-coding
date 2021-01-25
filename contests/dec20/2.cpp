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
    vi flowers(n);
    for (int i = 0; i < n; ++i) {
        cin >> flowers[i];
    }
    int count = 0;
    for (int i = 0; i < n; ++i) {
        set<int> petals;
        int sum = 0;
        int cur = 0;
        for (int j = i; j < n; ++j) {
            sum += flowers[j];
            cur++;
            petals.insert(flowers[j]);
            if ((sum / cur) * cur == sum) {
                if (petals.count((sum / cur)) == 1) {
                    count++;
                }
            }
        }
    }
    cout << count << nl;
    
    return 0;

}

