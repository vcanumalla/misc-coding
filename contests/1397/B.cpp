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
ll func(vll nums, ll x) {
    ll sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        ll cur = abs(nums[i] - lround(pow(x, i)));
        sum += cur;
        //cout << sum << nl;
    }
    return sum;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    ll n; cin >> n;
    vll nums(n);
    for (ll i = 0; i < n; ++i){ 
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    ll sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += nums[i];
    }
    ll minCount = sum - n;
    for (ll x = 1; ; x++) {
        ll count = 0;
        ll pow = 1;
        for (ll j = 0; j < n; ++j) {
            count += abs(nums[j] - pow);
            pow *= x;
            if (pow > INF) {
                break;
            }
        }
        if (pow / x > minCount + nums[n-1]) {
            break;
        }
        minCount = min(minCount, count);
    }
    cout << minCount << nl;
    return 0;
}

