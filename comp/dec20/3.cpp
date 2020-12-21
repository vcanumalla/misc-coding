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
    vi direction(n);
    vi stopped(n);
    vector<pll> cows(n);
    vi count(n);
    // set initial conditions
    for (int i = 0; i < n; ++i) {
        char d; cin >> d;
        if (d == 'E') {
            direction[i] = 1;
        }
        else {
            direction[i] = 0;
        }
        ll c1; cin >> c1;
        ll c2; cin >> c2;
        pll p1 = make_pair(c1, c2);
        cows[i] = p1;
        stopped[i] = 1;
    }
    set<pll> traveled;
    for (int t = 0; t < 50000; ++t) {
        // for cows in vec
        for (int i = 0; i < n; ++i) {
            // if cow != 0
            if (stopped[i] == 1) {
                pll p1;
                if (direction[i] == 1) {
                    ll xcord = t + cows[i].first;
                    p1.first = xcord;
                    p1.second = cows[i].second;
                }
                else {
                    ll ycord = t + cows[i].second;
                    p1.first = cows[i].first;
                    p1.second = ycord;
                }
                if (traveled.count(p1) == 1) {
                    stopped[i] = 0;
                }
                else {
                    count[i]++;
                }
            }
        }
        for (int i = 0; i < n; ++i) {
            if (stopped[i] == 1) {
                pll p1;
                if (direction[i] == 1) {
                    ll xcord = t + cows[i].first;
                    p1.first = xcord;
                    p1.second = cows[i].second;
                }
                else {
                    ll ycord = t + cows[i].second;
                    p1.first = cows[i].first;
                    p1.second = ycord;
                }
                traveled.insert(p1);
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        if (stopped[i] == 1) {
            cout << "Infinity" << nl;
        }
        else {
            cout << count[i] << nl;
        }
    }
    return 0;

}

