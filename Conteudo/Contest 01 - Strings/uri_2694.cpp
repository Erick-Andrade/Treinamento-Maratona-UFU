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
        string inp, num; cin >> inp;
        int size = inp.size(), ans = 0;
        for (int i = 0; i < size; i++) {
            if (inp[i] >= '0' and inp[i] <= '9') {
                string num;
                while (i < size and inp[i] >= '0' and inp[i] <= '9') {
                    num += inp[i];
                    i++;
                }

                ans += stoi(num);
            }
        }
        cout << ans << endl;
    }
    return 0;
}