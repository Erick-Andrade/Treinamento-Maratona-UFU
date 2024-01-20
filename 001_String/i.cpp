#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
 
const int MAX = 1e6+10;
const int IINF = INT_MAX;
const int INF = 0x3f3f3f3f;
const ll lINF = 0x3f3f3f3f3f3f3f3fll;


int main() { _

    int n; cin >> n;
    map<string, pair<int, int>> b;
    while (n--) {
        string m;
        char l;
        cin >> m >> l;
        if (b.find(m) == b.end()) b[m] = {0, 0};
        pair<int, int> pos = b[m];
        if (l == 'E') pos.f++;
        else pos.s++;
        b[m] = pos;
    }
    
    int ans = 0;
    
    for (const auto& brinco : b) ans += min(brinco.s.f, brinco.s.s);
    cout << ans << endl;
    

    return 0;
}