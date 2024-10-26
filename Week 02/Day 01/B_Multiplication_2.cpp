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
    int n;cin >> n;
    int arr[n];
    bool zero = false;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        zero = (arr[i] == 0 || zero);
    }
    if(zero) {
        cout << 0;
        return;
    }
    int ans = arr[0];
    for (int i = 1;i < n; i++) {
        double threshold = ((double)INF / ans);
        if(double(arr[i]) > threshold) { 
            cout << -1;
            return;
        }
        ans *= arr[i];
    }
    if(ans > INF) {
        cout << -1;
        return;
    }
    cout << ans;
}

int32_t main() {
    fastio;
    int t = 1;
    while(t--) {
        solution();
    }
    return 0;
}
