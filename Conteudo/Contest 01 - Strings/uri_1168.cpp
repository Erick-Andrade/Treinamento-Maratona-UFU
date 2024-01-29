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
    int leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6}, n;
    cin >> n;
    while (n--) {
        string inp; cin >> inp;
        int ans = 0;
        for (char c: inp) ans += leds[c-48];
        cout << ans << " leds" << endl;
    }

    return 0;
}