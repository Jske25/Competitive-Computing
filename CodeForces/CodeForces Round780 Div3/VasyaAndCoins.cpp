#include <bits/stdc++.h>
using namespace std;
 
#define pii pair<int, int>
#define vi vector<int>
#define vvi vector<vi>
#define mi map<int, int>
#define PB push_back
#define MP make_pair
#define FOR(i, a, b) for (int i = a; i <=b; ++i)
#define f first
#define s second
#define int long long
 
void setIO(string name = "") {
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    if ((int)(name).size()) {
        freopen((name+".in").c_str(), "r", stdin);
        freopen((name+".out").c_str(), "w", stdout);
    }   
}
 
 
signed main()
{
    setIO("");
    int t; cin >> t;
    while (t--) {
        int a; cin >> a;
        int b; cin >> b;
        if (a == 0) {
            cout << 1 << endl;
        }
        else {
            cout << a*1 + b*2 + 1 << endl;
        }
    }
 
 
    
 
 
    
}
