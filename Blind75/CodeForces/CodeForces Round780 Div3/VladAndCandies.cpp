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
        int n; cin >> n;
        vector<int> v(n);
        for (int x = 0; x < n; x++) {
            cin >> v[x];
        }
        sort(v.begin(), v.end());
        if (n == 1 && v[0] == 1) {
            cout << "YES" << endl;
        }
        else if (v[v.size()-1] - v[v.size()-2] == 1) {
            cout << "YES" << endl;
        }
        else if (v[v.size()-1] == v[v.size()-2] == 1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
 
 
 
    }
 
    
}
