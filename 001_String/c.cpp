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
    string removido[] = {"da", "de", "do", "dos", "e"};
    vector<string> palavras;
    int comeco = 1;
    getline(cin, inp);
    for (int i = 0; i < inp.size(); i++) {
        string ss;
        int ok = 0;
        while (i < inp.size() and inp[i] != ' ') {
            ss += inp[i];
            ok = 1;
            i++;
        }
        
        if (ok) palavras.pb(ss);
    }

    if (palavras.size() < 3) for (int i = 0; i < palavras.size(); i++) cout << palavras[i] << " "; 
    else {
        int comeco = 0;
        while (comeco < palavras.size()) {
            int valido = 1;
            for (int j = 0; j < 5; j++) if (palavras[comeco] == removido[j]) {
                valido = 0;
                break;
            }
            if (valido == 0) comeco++;
            else break;
        }
        
        if (comeco < palavras.size()) {
            cout << palavras[comeco] << " ";
            int final = palavras.size()-1;
            while (final >= comeco and final > 0) {
                int valido = 1;
                for (int j = 0; j < 5; j++) if (palavras[final] == removido[j]) {
                    valido = 0;
                    break;
                }
                if (valido == 0) final--;
                else break;
            }
            
             for (int i = comeco+1; i < final; i++) {
                int valido = 1;
                for (int j = 0; j < 5; j++) if (palavras[i] == removido[j]) {
                    valido = 0;
                    break;
                }
                
                if (valido) cout << palavras[i][0] << ". ";
            }
            
            if (final != comeco) cout << palavras[final];         
        }
        else return 0;
        
    

    }
    
    
    cout << endl;






    return 0;
}