// Username: Jske25
// Lang: C++
// Author: Jack Ke

#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>
#define vi vector<int>
#define vvi vector<vi>
#define PB push_back
#define MP make_pair
#define FOR(i, a, b) for (int i = a; i <=b; ++i)
#define f first
#define s second


void setIO(string name = "") {
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    if ((int)(name).size()) {
        freopen((name+".in").c_str(), "r", stdin);
        freopen((name+".out").c_str(), "w", stdout);
    }   
}


int main() {
    
    setIO("");
    ios::sync_with_stdio(false);
	cin.tie(0);

    int n, q; cin >> n >> q;
    vvi v(n, vi(n, 0));
    FOR(i, 0, n-1) {
        FOR (x, 0, n-1) {
            char temp; cin >> temp;
            if (temp == '*') {
                v[i][x]++;
            }
        }
    }
    vvi psum(n, vi(n+1, 0));
    FOR(i, 0, n-1) {
        FOR(x, 1, n) {
            psum[i][x] = psum[i][x-1] + v[i][x-1];
        }
    }
    while (q--) {
        int a, b, c, d; cin >> a >> b >> c >> d;
        int ans = 0;
        FOR(i, a, c) {
            ans = ans + psum[i-1][d] - psum[i-1][b-1];
        }
        cout << ans << endl;
    }




}
