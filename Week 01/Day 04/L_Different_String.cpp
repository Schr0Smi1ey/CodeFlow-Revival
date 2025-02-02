#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long int
#define trace(x) cout << #x << " : " << x << endl;
const int MOD = 1e9 + 7;
const int INF = 1e18, MINF = -1e18;
const int N = 2e5 + 5;

void solution() {
    string str,temp;
    cin >> str;
    temp = str;
    if(is_sorted(str.begin(),str.end())) {
        sort(str.rbegin(),str.rend());
    }
    else {
        sort(str.begin(), str.end());
    }
    if(temp == str) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl << str << endl;
    }
}

int32_t main() {
    fastio;
    int t = 1;
    cin >> t;
    while(t--) {
        solution();
    }
    return 0;
}
