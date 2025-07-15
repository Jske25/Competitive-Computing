#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m; cin >> n >> m;
    vector<set<int>> v(n);
    set<int> dp;
    map<int, int> count;
 
 
   	while(m--) {
        int a, b; cin >> a >> b;
		a--; b--;
        v[a].insert(b);
        v[b].insert(a);	
        dp.insert(min(a, b));
        count[min(a, b)]++;
    }
 
    int q; cin >> q;
    while(q--) {
        int a; cin >> a;
        if (a == 3) {
           cout << n-dp.size() << endl;
        }
        else if (a == 2) {
            int x, y; cin >> x >> y;
			x--; y--;
            v[x].erase(y);
            v[y].erase(x);
 
            int mx = min(x, y);
            count[mx]--;
 
            if (count[mx] == 0) {
                dp.erase(mx);
            }
        }
        else {
            int x, y; cin >> x >> y;
			x--; y--;
            v[x].insert(y);
            v[y].insert(x);
            
            count[min(x, y)]++;
            dp.insert(min(x, y));
 
        }
    }
}
