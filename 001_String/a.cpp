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

    string s,aux; cin >> s;

    
    for(int i=0; i<s.size(); i++){
        if(s[i] >= 'A' and s[i] <= 'Z'){
            s[i] += 32;
        }
    }

    aux = s;  
    reverse(s.begin(), s.end());  

    if(aux == s){
        cout << "sim" << endl;
    }
    else{
        cout << "não" << endl;
    }

   
    
    return 0;
}