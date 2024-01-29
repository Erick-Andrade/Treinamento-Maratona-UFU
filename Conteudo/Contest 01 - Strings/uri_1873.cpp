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
    while (n--) {
        string a, b; cin >> a >> b;
        int ans = 0;

        if (a == "tesoura") ans = (b == "papel" or b == "lagarto") ? 1: 0;
        else if (a == "pedra") ans = (b == "tesoura" or b == "lagarto") ? 1: 0;
        else if (a == "papel") ans = (b == "pedra" or b == "spock") ? 1: 0;
        else if (a == "lagarto") ans = (b == "spock" or b == "papel") ? 1: 0;
        else ans = (b == "pedra" or b == "tesoura") ? 1: 0;

        if (a==b) ans = -1;
        if (ans == 1) cout << "rajesh" << endl;
        else if (ans == 0) cout << "sheldon" << endl;
        else cout << "empate" << endl;
    }
    return 0;
}