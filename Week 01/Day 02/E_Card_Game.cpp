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
    int a,b,c,d;cin >> a >> b >> c >> d;
    cout << (((a > c) + (b > d) - (a < c) - (b < d)) >= 1) + (((a > d) + (b > c) - (a < d) - (b < c)) >= 1) + (((b > c) + (a > d) - (b < c) - ( a < d)) >= 1) + (((b > d) + (a > c) - (b < d) - (a < c)) >= 1) << endl;
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