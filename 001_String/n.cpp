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

    string inp, ans;
    getline(cin, inp);
    int size = inp.size();
    for (int i = 0; i < size; i++) {
        char c = inp[i];
        while (i+1 < size and inp[i+1] == c) {
            i++;
        }
        cout << c;
    }
    cout << endl;
    return 0;
}