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
    vector<pair<int, int>> ord(n);
    vector<pair<int, int>> p(n);
    for (int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        ord[i].f = pow(y, 2) + pow(x, 2);
        ord[i].s = i;
        p[i].f = x;
        p[i].s = y;
    }

    sort(ord.begin(), ord.end());
    for (int i = 0; i < n; i++) {
        int index = ord[i].s;
        cout << p[index].f << " " << p[index].s << endl;
    }
    
    return 0;
}