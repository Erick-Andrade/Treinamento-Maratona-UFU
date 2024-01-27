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

    vector<int> v;
    int x;
    while (cin >> x) v.pb(x);

    sort(v.begin(), v.end());
    for (auto x: v) {
        if (x == 1) cout << 'A' << " ";
        else if (x == 11) cout << 'J' << " ";
        else if (x == 12) cout << 'Q' << " ";
        else if (x == 13) cout << 'k' << " ";
        else cout << x << " ";
    }
    
    cout << endl;
    
    return 0;
}