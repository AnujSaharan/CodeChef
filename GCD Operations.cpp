#include <bits/stdc++.h>

using namespace std;

#define ll long long

int gcd(int a, int b)
{

	if (a == 0)
		return b;
	if (b == 0)
		return a;

	if (a == b)
		return a;

	if (a > b)
		return gcd(a - b, b);
	return gcd(a, b - a);
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		int n; cin >> n;

		int* arr = new int[n];

		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		int flg = 1;

		if (n == 1) {
			if (arr[0] != 1) {
				flg = 0;
			}
		} else {

			for (int i = 0; i < n; i++) {
				if (arr[i] != i + 1) {
					if (arr[i] > i + 1) {
						flg = 0;
					} else {
						if (gcd(arr[i], i + 1) != arr[i]) {
							flg = 0;
						}
					}
				}
			}
		}

		if (flg) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}

		delete [] arr;

	}

}
