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
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    while (t--) {
        int n, a, b; cin >> n >> a >> b;
        int left = n;
        string s;
        while (left != 0) {
            for (int i = 0; i < b; ++i) {
                s += alphabet[i];
                left--;
                if (left ==0) {
                    break;
                }
            }
        }
        cout << s << nl;
    }
    return 0;

}

