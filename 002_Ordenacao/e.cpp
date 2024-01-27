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

    string data, hora, msg;
    vector<pair<pair<string, string>, pair<int, string>>> d;
    int i = 0;
    while (cin >> data >> hora) {
        getline(cin, msg);
        string dia = "", mes= "", ano = "";
        dia = data.substr(0, 2);
        mes = data.substr(3, 2);
        ano = data.substr(6, 4);

        string nDia = ano+mes+dia;
        d.pb({{nDia, hora}, {i, msg}});
        i++;
    }

    sort(d.begin(), d.end());

    for (auto x: d) {
        string data = x.f.f;
        string dia = "", mes= "", ano = "";
        ano = data.substr(0, 4);
        mes = data.substr(4, 2);
        dia = data.substr(6, 2);
        string novaData = dia+"/"+mes+"/"+ano;
        string hora = x.f.s;
        string msg = x.s.s;
        cout << novaData << " " << hora << msg << endl;

    }

    return 0;
}