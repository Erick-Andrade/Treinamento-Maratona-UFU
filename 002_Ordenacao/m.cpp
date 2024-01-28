#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
 
const int MAX = 1e3+10;
const int IINF = INT_MAX;
const int INF = 0x3f3f3f3f;
const ll lINF = 0x3f3f3f3f3f3f3f3fll;


int main() { _

    unordered_map<string, char> convertido = {
        {"á", 'a'}, {"à", 'a'}, {"ã", 'a'}, {"â", 'a'},
        {"é", 'e'}, {"ê", 'e'},
        {"í", 'i'},
        {"ó", 'o'}, {"ô", 'o'}, {"õ", 'o'},
        {"ú", 'u'}, {"ü", 'u'},
        {"ç", 'c'},
        {"Á", 'A'}, {"À", 'A'}, {"Ã", 'A'}, {"Â", 'A'},
        {"É", 'E'}, {"Ê", 'E'},
        {"Í", 'I'},
        {"Ó", 'O'}, {"Ô", 'O'}, {"Õ", 'O'},
        {"Ú", 'U'}, {"Ü", 'U'},
        {"Ç", 'C'}
    };
    int n; cin >> n;
    vector<pair<string, string>> names;
    
    while (n--) {
        string original, modificada; cin >> original;
        for (int i = 0; i < original.size(); i++) {
            char c = original[i];
            if (c >= 'A' and c <= 'Z') c = tolower(c);

            if (c >= 'a' and c <= 'z') modificada += c;
            else {
                string l = original.substr(i, 2);
                char c = convertido[l];
                modificada += c;
                i++;
            }
        }
        names.pb({modificada, original});
    }

    sort(names.begin(), names.end());
    for (auto name: names) cout << name.s << endl;

    return 0;
}