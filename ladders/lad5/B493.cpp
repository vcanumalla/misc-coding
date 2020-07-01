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
    ll x= 0;
    ll y = 0;
    vll sex, sey;
    bool last = true;
    for (int i = 0; i < n; ++i) {
        int t; cin >> t;
        if (t < 0) {
            t *= -1;
            sey.pb(t);
            y += t;
            last = false;
        }
        else {
            sex.pb(t);
            x+=t;
            last = true;
        }

    }
    if (x == y) {
        int check = false;
        string winner;
        for (int i = 0; i < min(sex.size(), sey.size()); ++i) {
            ll num1 = sex[i];
            ll num2 = sey[i];
            // cout << num1 << " " << num2 << "    ";
            if (num1 < num2) {
                winner = "second";
                check = true;
                break;
            }
            else if (num1 > num2) {
                winner = "first";
                check = true;
                break;
            }
            else {
                continue;
            }
        }
        if (check) {
            cout << winner << nl;
        }
        else {
            if (last) {
                cout << "first" << nl;
            }
            else {
                cout << "second" << nl;
            }
        }
    }
    else {
        if (x > y) {
            cout << "first" << nl;
        }
        else {
            cout << "second" << nl;
        }
    }
    return 0;

}

