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
bool checkValid(vi coords) {
    int sum = coords[3] + coords[4] + coords[5];
    if (coords[0] + coords[4] + coords[8] == sum) {
        if (coords[0] + coords[3] + coords[6] == sum) {
            if (coords[1] + coords[4] + coords[7] == sum) {
                if (coords[2] + coords[5] + coords[8] == sum) {
                    for (int n: coords) {
                        if (n == 0) {
                            return false;
                        }
                    }
                    return true;
                }
            }
        }
    }
    return false;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    vi coords;
    for (int i = 0; i < 9; ++i) {
        int n; cin >> n;
        coords.pb(n);

    }
    for (int i = 1; i <= 100000; ++i) {
        coords[4] = i;
        int sum = coords[3] + coords[4] + coords[5];
        coords[0] = sum - coords[1] - coords[2];
        coords[8] = sum - coords[6] - coords[7]; 
        if (checkValid(coords)) {
            // print coorect graph
            cout << coords[0] << " " << coords[1] << " " << coords[2] << nl;
            cout << coords[3] << " " << coords[4] << " " << coords[5] << nl;
            cout << coords[6] << " " << coords[7] << " " << coords[8] << nl;
            break;
        }
        
    }
    return 0;

}

