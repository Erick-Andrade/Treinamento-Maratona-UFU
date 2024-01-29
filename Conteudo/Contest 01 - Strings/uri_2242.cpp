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
    
    string inp, cmp = "aeiou", vogais; cin >> inp;

    for (char c: inp) {
        for (int i = 0; i < cmp.size(); i++)  if (c == cmp[i]) {
            vogais += c;
            break;
        }
    }

    string rev = vogais;
    reverse(rev.begin(), rev.end());
    if (vogais == rev) cout << "S" << endl;
    else cout << "N" << endl;
    return 0;
}