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

    string c,ans=""; cin >> c;
    int temp = 1;

    for(int i=0; i<c.size(); i++){
        if(i == 0){
            ans += c[i];
        }
        else{
            if(c[i] == c[i-1]){
                temp++;
            }
            else if(temp != 1){
                string aux = to_string(temp); 
                ans += aux;
                temp = 1;
                ans += c[i];
            }
            else if(temp == 1){
                ans += c[i];
            }
        }

        if(i == c.size()-1 and temp != 1){
            string aux = to_string(temp); 
            ans += aux; 
        }
        
    }

    if(c.size() == ans.size()){
        cout << c << endl;
    }
    else{
        cout << ans << endl;
    }

    return 0;
}