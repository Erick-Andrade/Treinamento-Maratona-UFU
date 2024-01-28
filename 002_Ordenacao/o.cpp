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

int insertion(string& ss) {
    int size = ss.size();
    int ans = size - 1;
    for (int i = 1; i < size; i++) {
        int j = i - 1, jj = i;
        while (j >= 0 and ss[jj] < ss[j]) {
            swap(ss[jj], ss[j]);
            j--;
            jj--;
            ans++;
        }
    }   
    return ans;
}

int main() { _

    int n; cin >> n;
    while (n--) {
        string inp; cin >> inp;
        cout << insertion(inp) << endl;
    }
    
    return 0;
}