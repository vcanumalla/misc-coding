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
    int countOdd = 0;
    int countEven = 0;
    vi nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
        if (nums[i] % 2 == 0) {
            countEven++;
        }
        else {
            countOdd++;
        }
    }
    int desired;
    if (countOdd > countEven) {
        desired = 0;
    }
    else {
        desired = 1;
    }
    for (int i = 0; i < n; ++i) {
        if (nums[i] % 2 == desired) {
            cout << i + 1 << nl;
        }
    }
    return 0;

}

