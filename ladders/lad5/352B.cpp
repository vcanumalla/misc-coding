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
    vi seq(n);
    for (int i = 0; i < n; ++i) {
        cin >> seq[i];
    }
    vpi locations(100001);
    for (int i = 0; i < 100001; ++i) {
        locations[i].first = -1;
        locations[i].second = 0;
    }
    for (int i = 0; i < n; ++i) {
        int num = seq[i];
        if (locations[num].first == -1) {
            locations[num].first = i;
        }
        else {
            int index = i;
            if (locations[num].second == 0) {
                locations[num].second = index - locations[num].first;
                locations[num].first = index;
            }
            else {
                if (index - locations[num].first != locations[num].second) {
                    locations[num].second = -1;
                }
                else {
                    locations[num].first = index;
                }
            }
        }
    }
    int count = 0;
    for (int i = 1; i < 100001; ++i) {
        if (locations[i].first != -1) {
            if (locations[i].second != -1) {
                count++;
            }
        }
    }
    
    cout << count << nl;
    for (int i = 0; i < 100001; ++i) {
        if (locations[i].first != -1) {
            if (locations[i].second != -1) {
                cout << i << " " << locations[i].second << nl;
            }
        }
    }
    return 0;
}


