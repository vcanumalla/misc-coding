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
        vi people(n);
        for (int i = 0; i < n; ++i) {
            cin >> people[i];
        }
        sort(people.begin(), people.end());
        int maxTeams = 0;
        int curTest = 2 * people[people.size() -1];
        for (int i = curTest; i >= 2 * people[0]; --i) {
            int curTeams = 0;
            int right = 0;
            int left = 0;
            while (true) {
                int curSum = people[n - right - 1] + people[0 + left];
                if (n - right - 1 == 0 + left || n - right - 1 < 0 + left) {
                    break;   
                }
                else {
                    if (i > curSum) {
                        left++;
                    }
                    else if (i < curSum) {
                        right++;
                    }
                    else {
                        curTeams++;
                        left++;
                        right++;
                    }
                }
            }
            maxTeams = max(maxTeams, curTeams);
        }
        cout << maxTeams << nl;
    }
    return 0;

}

