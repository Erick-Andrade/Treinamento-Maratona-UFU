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

    map<int, int> freq;
    int n; cin >> n;
    vector<pair<int, int>> vet;


    while (n--) {
        int x; cin >> x;
        if (freq.find(x) == freq.end()) freq[x] = 1;
        else freq[x]++;
    }

    for (auto x: freq) {
        pair<int, int> val = {x.s, x.f};
        vet.pb(val);
    }

    sort(vet.begin(), vet.end(), greater<pair<int, int>>());
    cout << vet[0].s << " " << vet[0].f << endl;
    return 0;
}