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
    map<int, int> mp;
    for(int i = 0;i < n;i++) {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    int cnt = 0;
    for(int i = 0;i < n;i++) {
        cnt += (n - i - mp[arr[i]]);
        mp[arr[i]] = max(mp[arr[i]] - 1, 0LL);
    }
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
