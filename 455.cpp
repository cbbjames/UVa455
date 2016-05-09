#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int main() {
	int n; cin >> n;
	while (n--) {
		string s, t; cin >> s;
		int ans = 0;
		for (int i = 0; i < s.size(); i++) {
			t = t + s[i];
			if (s.size() % t.size() != 0) continue;
			else {
				int m = s.size() / t.size();
				string seg = t, check;
				while (m--) check = check + seg;
				if (check == s) { ans = t.size(); break; }
			}
		}
		cout << ans<<endl;
		if (n > 0) cout << endl;
	}
	//system("PAUSE");
	return 0;
}