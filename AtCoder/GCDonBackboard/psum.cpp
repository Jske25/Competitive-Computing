#include <bits/stdc++.h>
using namespace std;

#define int long long

void setIO(string name = "") {
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    if ((int)(name).size()) {
        freopen((name+".in").c_str(), "r", stdin);
        freopen((name+".out").c_str(), "w", stdout);
    
    }   
}
int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

signed main() {
    setIO("");
    ios::sync_with_stdio(false);
	cin.tie(0);

    int n; cin >> n;
    vector<int> v(n);
    vector<int> psum(n+1, 0);
    vector<int> psum2(n+1, 0);
    int ans = 0;
    for (int x = 0; x < n; x++) {
        int temp; cin >> temp;
        v[x] = temp; 
    }
    psum[0] = v[0];
    psum2[n] = v[n-1];
    for (int x = 1; x <= n; x++) {
        psum[x] = gcd(psum[x-1], v[x-1]);
    }
    
    for (int x = n-1; x >= 0; x--) {
        psum2[x] = gcd(psum2[x+1], v[x]);
    }

    for (int x = 1; x <= n; x++) {
        if (x == 1) {
            ans = max(ans, psum2[x]);
        }
        else if (x == n) {
            ans = max(ans, psum[x-1]);
        }
        else {
            ans = max(ans, gcd(psum[x-1], psum2[x]));
        }
    }

    cout << ans << endl;


    
}
