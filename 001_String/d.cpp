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
    int qtd1[150] = {0}, qtd2[150] = {0};
    getline(cin, a);
    getline(cin, b);
    for (char c: a) qtd1[c]++;
    for (char c: b) qtd2[c]++;

    int ans = 1;
    for (int i = 0; i < 150; i++) if (qtd1[i] != qtd2[i]) {
        ans = 0;
        break;
    }

    if (ans) cout << "sim" << endl;
    else cout << "nao" << endl;
    return 0;
}