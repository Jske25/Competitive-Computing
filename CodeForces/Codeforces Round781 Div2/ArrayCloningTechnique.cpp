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
        map<int, int> m;
        for (int x = 0; x < n; x++) {
            cin >> v[x];
            m[v[x]]++;
        }
        int max1 = 0;
        for (int x = 0; x < n; x++) {
            max1 = max(max1, m[v[x]]);
        }
        int moves = 0;
        int num = max1;
        int tmep = max1;
        if (n == max1) {
            cout << 0 << endl;
        }
        else {
            while(num < n) {
                moves++;
                num += max1;
                if (num > n) {
                    moves+= (n-max1);
                    break;
                }
                else {
                    moves+=max1;
                }
                max1 = num;
            }
            cout << moves << endl;
        }
 
  
    }
    
}
