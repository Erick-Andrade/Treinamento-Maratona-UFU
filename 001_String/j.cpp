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

    string a, b;
    getline(cin, a);
    getline(cin, b);
    int size = a.size(), ans = 1;
    for (int i = 0; i < size; i++) {
        if (a[i] != b[i]) {
            ans = 0;
            break;
        }
    }

    if (ans) cout << "1" << endl;
    else cout << "0" << endl;
    return 0;
}