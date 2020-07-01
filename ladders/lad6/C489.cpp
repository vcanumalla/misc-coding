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
    int m, s; cin >> m >> s;
    if (s == 0 && m != 1) {
        cout << "-1" << " " << "-1" << nl;
    }
    else if (m == 1 && s == 0) {
        cout << 0 << " " << 0 << nl;
    }
    else if (m * 9 < s) {
        cout << "-1" << " " << "-1" << nl;
    }
    else {
        vi maxNum(m);
        vi minNum(m);
       int numLeft = s;
       int maxPos = min(9, numLeft);
       for (int i = 0; i < m; ++i) {
           if (numLeft >= maxPos) {
               maxNum[i] = maxPos;
               numLeft-= maxPos;
           }
           else {
               maxNum[i] = numLeft;
               numLeft = 0;
           }
       }
       bool check = false; 
       if (maxNum[m-1] == 0) {
           check = true;
       }
       for (int i = maxNum.size() - 1; i >= 0; --i) {
           minNum[maxNum.size() - 1 - i] = maxNum[i];
       }
       if (check) {
           for (int i = 1; i < maxNum.size(); ++i) {
               if (minNum[i] > 0) {
                   minNum[0]++;
                   minNum[i]--;
                   break;
               }
           }
       }
       for (int i : minNum) {
           cout << i;
       }
       cout <<" ";
       for (int i: maxNum) {
           cout << i;
       }
       cout << nl;
       
    }
    return 0;

}

