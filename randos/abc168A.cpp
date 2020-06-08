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
    int n = s[s.length() -1] - 48;
    if (n == 1 || n == 6 || n == 8 || n == 0) {
        cout << "pon" << nl;
    }
    else if (n == 2 || n == 4 || n == 5 || n == 7 || n == 9) {
        cout << "hon" << nl;
    }
    else {
        cout << "bon" << nl;
    }

    return 0;

}

