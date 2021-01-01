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
    ll n; cin >> n;
    if (n == 1) {
        cout << "1 1" << nl;
        int k; cin >> k;
        cout <<  -1 * k << nl;
        cout << "1 1" << nl << 0 << nl << "1 1\n" << 0 << nl;
    }
    else {
        vll nums(n);
        for (int i = 0; i < n; ++i){ 
            cin >> nums[i];
        }
        cout << "1 1" << nl;
        cout << -nums[0] << nl;

        cout << "1 " << n << nl;
        cout << "0 ";
        for (int i = 1; i < n; ++i) {
            ll num =  n * -nums[i];
            cout << num << " ";
        }
        cout << nl;
        cout << "2 " << n << nl;
        for (int i = 1; i < n; ++i) {
            ll num = (n - 1) * nums[i];
            cout << num << " ";
        }
    }
    return 0;

}

