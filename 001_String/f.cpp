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

    string inp; cin >> inp;
    int validacoes[3] = {0}, size = inp.size();
    for (char c: inp) {
        if (c >= 'a' and c <= 'z') validacoes[0]++;
        else if (c >= 'A' and c <= 'Z') validacoes[1]++;
        else if (c >= '0' and c <= '9') validacoes[2]++;
    }

    int ans = 1;
    if (size < 8) ans = 0;
    for (int i = 0; i < 3; i++) {
        if (validacoes[i] == 0) {
            ans = 0;
            break;
        }
    }

    if (ans) cout << "senha valida" << endl;
    else {
        if (size < 8) cout << "minimo de 8 caracteres" << endl;
        if (validacoes[1] == 0) cout << "letra maiuscula" << endl;
        if (validacoes[0] == 0) cout << "letra minuscula" << endl;
        if (validacoes[2] == 0) cout << "numero" << endl;
    }
    return 0;
}