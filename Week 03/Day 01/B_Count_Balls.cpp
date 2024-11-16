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
    int n,a,b;cin >> n >> a >> b;
    int x = (n / (a + b));
    int cnt = x * a;
    if(x == 0)
    cnt = min(n, a);
    if(x != 0)
        cnt += min(a, (n % (a + b)));
    cout << cnt << endl;
}

int32_t main() {
    fastio;
    int t = 1;
    while(t--) {
        solution();
    }
    return 0;
}
