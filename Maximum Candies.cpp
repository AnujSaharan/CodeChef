#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t; cin >> t;

	while (t--) {
		int n, m, x, y;
		cin >> n >> m >> x >> y;


		if (n == 1 & m == 1) {
			cout << x << '\n';
		} else {

			int a = y - 1;
			int b = 1;

			while (true) {

				if (a <= x) {
					break;
				} else {
					a--;
					b++;

				}
			}

			if (b > x) {
				b = x;
			}

			cout << "a: " << a << " b: " << b << endl;



			int max = 0;

			int n1, m1;

			if (n % 2 != 0) {
				n1 = (n / 2) + 1;
			} else {
				n1 = (n / 2);
			}


			if (m % 2 != 0) {
				m1 = (m / 2) + 1;
			} else {
				m1 = (m / 2);
			}


			int n2, m2;

			n2 = n - n1;
			m2 = m - m1;


			int bigN = n1 * m1 + n2 * m2;


			max += a * bigN;

			int smallN = (m * n) - bigN;
			max += b * smallN;

			int max1 = 0;
			if (x >= y) {
				a++;
				b--;


				int n1, m1;

				if (n % 2 != 0) {
					n1 = (n / 2) + 1;
				} else {
					n1 = (n / 2);
				}


				if (m % 2 != 0) {
					m1 = (m / 2) + 1;
				} else {
					m1 = (m / 2);
				}


				int n2, m2;

				n2 = n - n1;
				m2 = m - m1;



				int bigN = n1 * m1 + n2 * m2;


				max1 += a * bigN;

				int smallN = (m * n) - bigN;
				max1 += b * smallN;


			}

			if (max1 > max) {
				cout << max1 << '\n';
			} else {
				cout << max << '\n';
			}

		}

	}
}
