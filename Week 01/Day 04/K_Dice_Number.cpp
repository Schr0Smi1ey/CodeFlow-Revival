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
    string a = "", b = "";
    for (int i = 0;i < 6; i++) {
        char ch;cin >> ch;
        if(i < 3) 
            a += ch;
        else
            b += ch;
    }
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    int aa = 0, bb = 0, x = 100;
    for (int i = 0; i < 3; i++) {
        aa += (a[i] - '0') * x;
        bb += (b[i] - '0') * x;
        x /= 10;
    }
    if(aa > bb) {
        cout << "Alice" << endl;
    }
    else if (bb > aa) {
        cout << "Bob" << endl;
    }
    else{
        cout << "Tie" << endl;
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
