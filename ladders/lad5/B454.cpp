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
int sorted(vector<int> arr, int n) {
    if (n == 1 || n == 0) {
        return 1;
    }
    if (arr[n- 1] < arr[n -2]) {
        return 0;
    }
    return (sorted(arr, n-1));
}
int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    vi array(n);
    int lastIndex;
    
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }
    if (is_sorted(array.begin(), array.end())) {
        cout << 0 << nl;
        return 0;
    }
    for (int i = 0; i < n - 1; ++i) {
        int cur = array[i];
        int next = array[i+1];
        if (cur > next) {
            lastIndex = i;
            break;
        }
        else {
            continue;
        }

    }
    int start = array[lastIndex + 1];
    bool check = true;
    for (int i = lastIndex + 2; i < n; ++i) {
        if (array[i] < start) {
            check = false;
            break;
        }
        else {
            start = array[i];
        }
    }
    
    if  (check) {
        if (array[n -1] > array[0]) {
            cout << -1 << nl;
        }
        else {
            cout << n - (lastIndex + 1) << nl;
        }
    }
    else {
        cout << -1 << nl;
    }

    return 0;

}

