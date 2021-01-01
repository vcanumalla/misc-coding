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
    vi boys(n);
    for (int i = 0; i < n; ++i) {
        cin >> boys[i];
    }
    int m; cin >> m;
    vi girls(m);
    for (int i = 0; i < m; ++i) {
        cin >> girls[i];
    }
    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());
    int count = 0;
    int minBoy = 0;
    for (int i = 0; i < m; ++i){ 
        int curGirl = girls[i];
        for (int j = minBoy; j < n; ++j) {
            if (abs(boys[j] - curGirl) <=1) {
                //cout << boys[j] << " " << curGirl << nl;
                count++;
                minBoy = j + 1;
                break;
            }
        }
    }
    cout << count << nl;
    return 0;

}

