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
        int n; cin >> n;
        int num; cin >> num;
        bool parity;
        if (num % 2 == 0) {
            parity = true;
        }
        else {
            parity = false;
        }
        bool check = true;
        for (int i = 0; i < n- 1; ++i) {
            int newNum; cin >> newNum;
            if (parity) {
                if (newNum % 2 == 0) {
                }
                else {
                    check = false;
                    break;
                }
            }
            else {
                if (newNum % 2 == 1) {
                    
                }
                else {
                    check = false;
                    break;
                }
            }
        }
        if (check || n == 1) {
            cout << "YES" << nl;
        }
        else {
            cout << "NO" << nl;
        } 

    }
    return 0;

}

