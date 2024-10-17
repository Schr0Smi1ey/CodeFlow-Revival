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
    int arr[n];
    int pos = 0, neg = 0, ans = 0, minima = INF;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        pos += (arr[i] > 0);
        neg += (arr[i] < 0);
        ans += abs(arr[i]);
        minima = min(minima, abs(arr[i]));
    }
    if (neg % 2 == 1)
        ans -= minima * 2;
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
