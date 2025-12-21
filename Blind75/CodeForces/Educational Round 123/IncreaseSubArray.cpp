#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, x; cin >> n >> x;
        vector<int> v(n);
        for (int x = 0; x < n; x++) {
            cin >> v[x];
        }
        vector<int> m(n+1, -1e9);
        m[0] = 0; // map  size to sum
        for (int p = 0; p < n; p++) {
            int counter = 0;
            for (int i = p; i < n; i++) {
                counter += v[i];
                m[i-p+1] = max(m[i-p+1], counter);
            }
        }
        for (int k = 0; k <= n; k++) {
            int ans = 0;
            for (int z = 0; z < n+1; z++) {
                ans = max(ans, (m[z] + min(z, k)*x));
            }
            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}
