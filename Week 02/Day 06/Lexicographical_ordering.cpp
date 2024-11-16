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
    string s,a,b;
    cin >> s >> a >> b;
    map<char,int> mp;
    for(int i = 1;i <= 26;i++) {
        mp[s[i-1]] = i;
    }
    int n = a.size(), m = b.size(), i = 0, j = 0;
    while(i < n && j < m) {
        if(a[i] == b[j]){
            i++;
            j++;
            continue;
        }
        if(mp[a[i]] > mp[b[j]]) {
            cout << ">" << endl;
            return;
        }
        else {
            cout << "<" << endl;
            return;
        }
    }
    if(a.size() > b.size()) {
        cout << ">" << endl;
    }
    else if(a.size() < b.size()) {
        cout << "<" << endl;
    }
    else {
        cout << "=" << endl;
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
