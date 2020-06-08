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
    int k; cin >> k;
    int maxNum; cin >> maxNum;
    char maxChar = 'a';
    vi alph;
    alph.pb(maxNum);
    for (int i = 0; i < 25; ++i) {
        int n; cin >> n;
        if (n > maxNum) {
            maxChar  = 98  + i;
            maxNum = n;
        }
        alph.pb(n);
    }
    ll sum = 0;
    for (int i = 0; i < s.length(); ++i) {
        char c = s[i];
        int w = alph[c - 97];
        // cout << c << " " << w << nl;
        sum += ((i+1) * w);
    }
    for (int i = s.length(); i < s.length() + k; ++i) {
        sum += ((i+1) * maxNum);
    }
    cout << sum << nl;
    return 0;

}

