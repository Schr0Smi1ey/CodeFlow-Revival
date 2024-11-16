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
    int a,b,k;cin >> a >> b >> k;
    vector<int> v;
    for (int i = 1; i <= 100;i++) {
        if((a % i == 0) && (b % i == 0))
            v.push_back(i);
    }
    cout << v[v.size() - k] << endl;
}

int32_t main() {
    fastio;
    int t = 1;
    while(t--) {
        solution();
    }
    return 0;
}
