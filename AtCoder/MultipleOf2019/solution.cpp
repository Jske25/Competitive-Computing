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
    string s; cin >> s;
    int n = s.size();

    int suf = 0;
    int pot = 1;
    int ans = 0;
    mi cnt;
    cnt[0]++;

    for (int x = n-1; x >= 0; x--) {
        int digit = s[x] - '0';
        suf = (suf + digit * pot) % 2019;
        ans  += cnt[suf];
        pot = (pot * 10) % 2019;
        cnt[suf]++;
    }

    cout << ans << endl;

}
