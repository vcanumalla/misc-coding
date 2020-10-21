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
        int n, k; cin >> n >> k;
        vi piles(n);
        for (int i = 0; i < n; ++i) {
            cin >> piles[i];
        }
        sort(piles.begin(), piles.end());
        int count = 0; 
        while (true) {
            int num = piles[0] + piles[1];
            if (num <= k) {
                count++;
                piles[1] += piles[0];
                piles.erase(piles.begin(), piles.begin() + 1);
            }
            else {
                break;
            }
            sort(piles.begin(), piles.end());
        }
        cout << count;
    }
    return 0;

}

