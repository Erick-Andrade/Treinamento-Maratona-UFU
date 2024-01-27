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

    set<ll> v;
    vector<ll> vet;
    string a, b;
    getline(cin, a);
    getline(cin, b);

    string num;
    for (int i = 0; i < a.size(); i++) {
        char c = a[i];
        if (c == ' ') {
            int inum = stoi(num);
            v.insert(inum);
            num = "";
        } else {
            num += c;
            int inum = stoi(num);
            if (i == a.size() - 1) v.insert(inum);
        }
    } 

    num = "";
    for (int i = 0; i < b.size(); i++) {
        char c = b[i];
        if (c == ' ') {
            int inum = stoi(num);
            vet.pb(inum);
            num = "";
        } else {
            num += c;
            int inum = stoi(num);
            if (i == b.size() - 1) vet.pb(inum);
        }
    } 

    sort(vet.begin(), vet.end());
    for(int i=0; i<vet.size(); i++){
        cout << vet[i] << " ";
        if(v.find(vet[i]) != v.end()) cout << "Está mapeado" << endl;
        else cout << "Não está mapeado" << endl;
    }

    return 0;
}