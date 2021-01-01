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
    vll A(n);
    vll B(m);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> B[i];
    }
    sort(A.begin(), A.end());
    for (int i = 0; i < B.size(); ++i) {
        int end = A.size() - 1;
        ll cur_b = B[i];
        int start = 0;
        int ans = -1;
        while (start <= end) {
            int mid = (start + end) /2;
            if (A[mid] <= cur_b) {
                start = mid + 1;
            }
            else {
                ans = mid;
                end = mid - 1;
            }
        }
        int final_ans = (ans == -1) ? A.size() : ans;
        cout << final_ans << " ";
    }
    cout << nl;
    return 0;

}

