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
 
bool Checker(string s) {
    bool ok = true;
    for (int x = 0; x < s.size(); x+= 2) {
        if (s.at(x) != s.at(x+1)) {
            ok = false;
 
        }
 
    }
    return ok;
}
 
 
signed main()
{
    setIO("");
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        vector<int> v(26, 0);
        vector<int> ans(s.size()+1, 0);
        for (int x = 1; x <= s.size(); x++) {
            if (v[s.at(x-1)-'a'] != 0) {
                ans[x] = max(ans[x-1], ans[v[s.at(x-1)-'a']-1] + 2);
            }
            ans[x] = max(ans[x], ans[x-1]);
 
            v[s.at(x-1)-'a'] = x;
        }
        cout <<  s.size() - ans[s.size()] << endl;
    }
 
    
}
