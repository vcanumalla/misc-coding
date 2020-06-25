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
    vi array(n);
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }
    int start = -1;
    int end = -1;
    int begin = array[0];
    bool desc = false;
    for (int i = 1; i < n; ++i) {
        int cur = array[i];
        if (cur < begin && !desc) {
            start = i - 1;
            end = i;
            desc = true;
        }
        else if ((cur > begin && desc)) {
            end = i - 1;
            break;
            
        }
        else if (cur < begin && desc) {
            end = i;
        }
        begin = cur;
    }
    // cout << start << " " << end << nl;
    if (start == -1 && end == -1) {
        cout << "yes" << nl;
        cout << "1 1" << nl;
    }
    else if (start == 0 && end == n - 1) {
        cout << "yes" << nl;
        cout << 1 << " " << n << nl;
    }
    // if (start == 0 && end == n-1) {
    //     cout << "yes" < nl;
    //     cout << 1 << " " << n << nl;
    // }
    else {
        for (int i = 0; i <= (end - start)/2; ++i) {
            swap(array[start + i], array[end - i]);
            // cout << "done" << nl;
        }
        int prev = -1;
        bool check = true;
        // for (int i = 0; i < n; ++i) {
        //     cout << array[i] << " ";
        // }
        for (int i = 1; i < n; ++i) {
            int num = array[i];
            if (num < array[i-1]) {
                check = false;
                break;
            }
        }
        if (check) {
            cout << "yes" << nl;
            cout << start + 1 << " " << end + 1 << nl;
        }
        else {
            cout << "no" << nl;
        }

    }


    return 0;
}


