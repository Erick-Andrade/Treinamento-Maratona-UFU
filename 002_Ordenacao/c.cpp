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

bool compare(int a, int b){
    if(a % 2 != b % 2){
        return a % 2 == 1;
    }

    return a < b;
}

int main() { _

    int n; cin >> n;
    vector<int> v(n);
    
    for(int i=0; i<n; i++) cin >> v[i];

    sort(v.begin(), v.end(), compare);

    for(auto u: v) cout << u << " ";
    return 0;
}