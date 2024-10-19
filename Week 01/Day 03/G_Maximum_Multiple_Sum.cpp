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
    int n;
    cin >> n;
    int ans = 0, lastSum = 0, i = 1;
    for (i = 2;i <= n; i++) {
        int j = 1, sum = 0;
        while(i * j <= n) {
            sum += i * j;
            j++;
        }
        if(lastSum == 0)
            lastSum = sum;
        if(sum >= lastSum) {
            ans = i;
            lastSum = sum;
        }
    }
    cout << ans << endl;
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
