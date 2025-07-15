#include <bits/stdc++.h>
using namespace std;
 
bool checker(string s, char a) {
	bool ok = true;
	int temp;
	int temp2;
	for (int x = 0; x < s.size(); x++) {
		if (s.at(x) == (char)(a - 32)) {
			temp2 = x;
			ok = false;
		}
		else if (s.at(x) == a) {
			temp = x;
			
		}
	}
	if (temp < temp2) return true;
	else return false;
}
 
int main() {
	int n; cin >> n;
	while (n--) {
		string s; cin >> s;
		if (checker(s, 'r') && checker(s, 'g') && checker(s, 'b')) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
}
