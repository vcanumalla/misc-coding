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
    vi cities(n);
    for (int i = 0; i < m; ++i) {
        int num; cin >> num;
        if (cities[num-1] == 0) {
            cities[num-1] =1;
        }
        cin >> num;
        if (cities[num - 1] == 0) {
            cities[num - 1] = 1;
        }
    }
    int center = -1;
    for (int i = 0; i < n; ++i) {
        if (cities[i] == 0) {
            center = i+1;
            break;
        }
    }
    cout << n -1 << nl;
    for (int i = 1; i <= n; ++i) {
        if (i == center) {
        
        }
        else {
            cout << i << " " << center << nl;
        }
    }

    
    return 0;

}

