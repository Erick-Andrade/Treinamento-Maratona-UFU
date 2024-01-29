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
        string inp; cin >> inp;
        int ans = 1, size = inp.size();
        for (int i = 0; i < size; i++) {
            int qtd = 0;
            while (inp[i] == 'a') {
                i++;
                qtd++;
            }

            if (qtd) ans *= qtd;
        }

        cout << "k";
        for (int i = 0; i < ans; i++) cout << "a";
        cout << endl;
    }
    return 0;
}