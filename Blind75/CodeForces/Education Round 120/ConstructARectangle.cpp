#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t; cin >> t;
    while (t--) {
        int a, b, c; cin >> a >> b >> c;
        if (a == b) {
            if (c %2 == 0) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
        else if (c == b) {
            if (a %2 == 0) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
        else if (a == c) {
            if (b %2 == 0) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
        else {
            if (max(max(a, b), c) == a+b+c-max(max(a, b), c)) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
 
        
    }
 
}
