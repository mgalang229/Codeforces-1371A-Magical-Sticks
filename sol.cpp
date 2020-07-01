#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n;

void decode() {
	cin >> n;
	cout << n - (n / 2) << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
}
