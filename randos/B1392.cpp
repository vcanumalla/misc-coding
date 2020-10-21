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
        ll n, k; cin >> n >> k;
        bool parity = k % 2 == 1;
        vll nums(n);
        cin >> nums[0];
        ll maxNum = nums[0];
        vll nnums(n);
        FOR(i, 1, n-1) {
            cin >> nums[i];
            maxNum = max(maxNum, nums[i]);

        }
        ll maxNum2 = maxNum - nums[0];
        for (int i = 0; i < n; ++i) {
            nums[i] = maxNum - nums[i];
            maxNum2 = max(nums[i], maxNum2);
        }
        for (int i = 0; i < n; ++i) {
            nnums[i] = maxNum2 - nums[i];
        }
        if (parity) {
            for (int i: nums) {
                cout << i << " ";
            }
            cout << nl;
        }
        else {
            for (int i: nnums) {
                cout << i << " ";
            }
            cout << nl;
        }


    }
    return 0;

}
