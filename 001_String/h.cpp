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

    string inp;
    getline(cin, inp);
    int k; cin >> k;
    for (char c: inp) {
        if (c >= 'a' and c <= 'z') {
            c = (c-'a' + k) % 26;
            c = 'a' + c;
        }
        
        else if (c >= 'A' and c <= 'Z') {
            c = (c-'A' + k) % 26;
            c = 'A' + c;
        }
        
        cout << c;
        
    }

    cout << endl;
    return 0;
}