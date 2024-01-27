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

bool compare(pair<string, pair<int, int>> a, pair<string, pair<int, int>> b){
    if (a.s.f == b.s.f) return a.s.s < b.s.s;
    return a.s.f > b.s.f;
}


int main() { _

    int n; cin >> n;
    map<string, pair<int, int>> v;

    for (int i = 0; i < n; i++) {
        string ss; cin >> ss;
        pair<int, int> p = {1, i};
        if (v.find(ss) == v.end()) v[ss] = p;
        else {
            pair<int, int> pp = v[ss];
            pp.f++;
            v[ss] = pp;
        }
    }

    vector<pair<string, pair<int, int>>> vet;
    for (auto x: v) {
        vet.pb(x);
    }
    
    sort(vet.begin(), vet.end(), compare);

    for (auto x: vet) cout << x.f << endl;



    return 0;
}