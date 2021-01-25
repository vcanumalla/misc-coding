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
bool sortbysec(const pair<int,int> &a,  
            const pair<int,int> &b) { 
            return (a.second < b.second); 
} 

struct Cmp
{
    bool operator ()(const pair<unsigned int, double> &a, const pair<unsigned int, double> &b)
    {
        return a.second < b.second;
    }
};


int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vi students(n);
        map <int, int> covered;
        int numDistinct = 0;
        for (int i = 0; i < n; ++i) {
            cin >> students[i];
        }
        vpi numsPresent;
        for (int i: students) {
            if (covered.count(i) == 0) {
                numsPresent.pb(make_pair (i, 1));
                covered[i] = numsPresent.size() - 1;
            }
            else {
                int index = covered[i];
                int prev = numsPresent[index].second;
                numsPresent[index] = make_pair(i, prev + 1);
            }
        }
        sort(numsPresent.begin(), numsPresent.end(), sortbysec);
        // for (int i = 0; i < numsPresent.size(); ++i) {
        //     cout << "(" << numsPresent[i].first << ", " << numsPresent[i].second << ") ";
        // }
        // cout << nl;
        int maxCount = numsPresent[numsPresent.size() - 1].second;
        numDistinct = numsPresent.size();
        RFOR(i, maxCount, 0) {
            int added = min(maxCount - i, 1);
            // cout << "added: " << added << nl;
            if ((numDistinct - 1 + added) >= i) {
                cout << i << nl;
                break;
            }
        }
        
    }
    return 0;

}

