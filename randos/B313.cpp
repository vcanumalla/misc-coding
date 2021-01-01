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
void printvi(vi vec) {
  cout << "[";
  for (int i  = 0; i < vec.size(); ++i) {
    cout << vec[i] << " ";
  }
  cout << "]\n";
}
int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    string s; cin >> s;
    int t; cin >> t;
    vi next(s.size() - 1);
    for (int i = 0; i < s.size() - 1; ++i) {
        if (s[i] == s[i+1]) {
            next[i] = 1;
        }
    }
    next.push_back(0);

    vi sums(s.size());
    sums[0] = next[0];
    for (int i = 1; i < s.size(); ++i) {
        sums[i] = sums[i-1] + next[i];
    }
    printvi(next);
    printvi(sums);
    while (t--) {
        int b1; cin >> b1;
        int b2; cin >> b2;
        cout << sums[b2 - 1] - sums[b1 - 2] << nl;
    }
    return 0;

}
