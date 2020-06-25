#include "bits/stdc++.h"
using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vector<int> >;
using vll = vector<long long>;
using pii = pair<int, int>;
using pll = pair<long long, long long>;
using vpi = vector<pair<int, int> >;
<<<<<<< HEAD
 
=======

>>>>>>> 0539e0e9938f5225a6cd67e230422c9653620ff4
#define F first
#define S second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
<<<<<<< HEAD
 
#define FOR(i, a, b) for (int i=(a); i <=(b); i++)
#define F0R(i, a) for (int i=0; i < (a); i++)
#define RFOR(i, a, b) for (int i = (a); i >= b; i--)
 
const char nl = '\n';
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
 
=======

#define FOR(i, a, b) for (int i=(a); i <=(b); i++)
#define F0R(i, a) for (int i=0; i < (a); i++)
#define RFOR(i, a, b) for (int i = (a); i >= b; i--)

const char nl = '\n';
const ll MOD = 1e9 + 7;
const ll INF = 1e18;

>>>>>>> 0539e0e9938f5225a6cd67e230422c9653620ff4
int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
<<<<<<< HEAD
        int x, y; cin >> x >> y;
        if (y < x) {
            y *= 2;
        }
        else {
            x *= 2;
        }
        int ar = max(x,y) * max(x,y);
        cout << ar << nl;
    }
    return 0;
 
}
=======
        ll num; cin >> num;
        if (num <=2) {
            cout << 0 << nl;
        }
        else {
            if (num % 2 == 0) {
                cout << (num / 2) - 1 << nl;
            }
            else {
                cout << num/2 << nl;
            }
        }
    }
    return 0;

}

>>>>>>> 0539e0e9938f5225a6cd67e230422c9653620ff4
