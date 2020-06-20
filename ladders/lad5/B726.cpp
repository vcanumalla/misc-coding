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
    vi occur(26);
    for (int i = 0; i < s.length(); ++i) {
        occur[s[i] - 'a']++;
    }
    int numOdd = 0;
    for (int i = 0; i < 26; ++i) {
        if (occur[i] %2 == 1) {
            numOdd++;
        }
    }
    if (numOdd <= 1) {
        cout << "First" << nl;
    }
    else {
        if (numOdd % 2 == 1) {
            cout << "First" << nl;
        }
        else {
            cout << "Second" << nl;
        }
    }
    return 0;

}

