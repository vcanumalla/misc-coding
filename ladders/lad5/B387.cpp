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
    int n, m; cin >> n >> m;
    vi a(n);
    vi b(m);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort (b.begin(), b.begin());
    int numNeeded = n;
    for (int i = 0; i < n; ++i) {
        int num = a[i];
        int index = -1;
        for (int j = b.size() - 1; j >= 0; --j) {
            if (b[j] >= num) {
                index = j;
            }
            else {
                break;
            }   
        }
        if (index != -1) {
            numNeeded--;
            b.erase(b.begin() + index);
        }
    }
    cout << numNeeded << nl;
    return 0;

}

