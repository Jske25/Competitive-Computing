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
        if (n%2 != 0) {
            n = n-2;
            cout << (n/2) << " " << (n/2)+1 << " " << 1 << " " << 1 << endl;
        }
        else if (n==4) {
            cout << 1 << " " << 1 << " " << 1 << " " << 1 << endl;
        }
        else {
            n = n-2;
            if (n/2 %2 == 0) {
                cout << (n/2)-1 << " " << (n/2)+1 << " " << 1 << " " << 1 << endl;
            }
            else {
                cout << (n/2)-2 << " " << (n/2)+2 << " " << 1 << " " << 1 << endl;
            }
        }
 
    }
 
    
}
