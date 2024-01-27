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
    vector<pair<int, string>> v;

    while(n--){
        string s; cin >> s;
        v.push_back({s.size(), s});

    }
    
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        cout << v[i].second << endl;
    }
    
    return 0;
}