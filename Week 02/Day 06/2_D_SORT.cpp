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
    vector<pair<int,int>> v(n); 
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(),v.end(),[&](pair<int,int> a, pair<int,int> b) {
        if(a.first < b.first)
            return true;
        else if((a.first == b.first) && (a.second > b.second))
            return true;
        else
            return false;
    });
    for (int i = 0; i < n; i++) {
        cout << v[i].first << " " << v[i].second << endl;
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
