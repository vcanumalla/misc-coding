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
    string s; cin >> s;
    int t; cin >> t;
    vi A(s.size());
    for (int i = 0; i < s.size() - 1; ++i) {
        if (s[i] == s[i+1]) {
            A[i] = 1;
        }
    }
    cout << "[ ";
    for (int i : A) {
        cout << i << " ";
    }
    cout << "]" << nl;
    vi S(s.size());
    S[0] = A[0];
    for (int i = 1; i < s.size(); ++i) {
        S[i] = S[i-1] + A[i];
    }
    cout << "[ ";
    for (int i : S) {
        cout << i << " ";
    }
    cout << "]" << nl;
    cout << 10 + s[-1];
    return 0;

}

