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
    int maxEven = -1;
    vi indexes;
    for (int i = 0; i < s.length(); ++i) {
        int n = s[i] - 48;
        if (n % 2 == 0) {
            indexes.pb(i);
        }
    }
    int last = s[s.length() - 1] - '0';
    for (int i = 0; i < indexes.size(); ++i) {
        int index = indexes[i];
        if (last > s[index] - 48) {
            swap(s[s.length() - 1], s[index]);
            break;
        }
        else {
            if (i == indexes.size() -  1) {
                swap(s[s.length() - 1], s[index]);
            }
        }
    }
    if (indexes.size() == 0) {
        cout << -1 << nl;
    }
    else {
        cout << s << nl;
    }
    return 0;

}

