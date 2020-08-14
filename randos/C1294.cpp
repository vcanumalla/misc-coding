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
        int num = n;
        int count = 0;
        vi divisors(3);
        for (int i = 2; i *i  <n; i++) {
            if (num % i == 0) {
                divisors[count] = i;
                count++;
                num /= i;
            }
            if (count == 2) {
                break;
            }
        }
        if (count == 2) {
            divisors[2] = num;
            if (divisors[2] != divisors[1] && divisors[2] != 1 && divisors[2] != divisors[0]) {
                cout << "YES" << nl;
                for (int i: divisors) {
                    cout << i << " ";
                }
                cout << nl;
            } 
            else {
                cout << "NO" << nl;
            }
        }
        else {
            cout << "NO" << nl;
        }
        
    }
    return 0;

}

