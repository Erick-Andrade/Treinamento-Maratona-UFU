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

bool comp(pair<int, string> a, pair<int, string> b) {
    if (a.f == b.f) return a.s < b.s;
    return a.f > b.f;
}

int main() { _

    int n; cin >> n;
    string name;
    int idade;
    cin.ignore();
    vector<pair<int, string>> p;

    while (n--) {
        string inp;
        getline(cin, inp);
        string name, id;
        int i = 0;
        while (inp[i] != ',') {
            name += inp[i];
            i++;
        }
        i++;

        while (i < inp.size()) {
            id += inp[i];
            i++;
        }

        int idade = stoi(id);
        p.pb({idade, name});
    }
    
    sort(p.begin(), p.end(), comp);
    for (auto x: p) cout << x.s << endl;
    return 0;
}