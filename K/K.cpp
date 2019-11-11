//D1: UO Off by One
#include<algorithm>
#include<functional>
#include<climits>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<iostream>
#include<sstream>
#include<iomanip>
#include<deque>
#include<list>
#include<queue>
#include<stack>
#include<string>
#include<vector>
#define int long long
#define double long double
using namespace std;

void solve() {
	int n, m, q;
	cin >> n >> m >> q;
	auto cache = new int[n];
	for (int i = 0; i < n; i++) cache[i] = 0;
	auto data = new int*[m];
	auto sizes = new int[m];
	for (int i = 0; i < m; i++) {
		int nums;
		cin >> nums;
		sizes[i] = nums;
		data[i] = new int[nums];
		int ttmp;
		for (int j = 0; j < nums; j++) {
			cin >> ttmp; data[i][j] = ttmp;
		}
	}
	for (int i = 0; i < q; i++) {
		cin >> m;
		if (m == 2) {
			int p;
			cin >> p;
			cout << cache[p-1] << endl;
		} else if (m == 1) {
			int j, p;
			cin >> j >> p;
			j -= 1;
			p -= 1;
			for (int k = 0; k < sizes[j]; k++) {
				cache[p + k] = data[j][k];
			}
		} else if (m == 3) {
			int j, l, r;
			cin >> j >>  l >>   r;
			j -= 1;
			l -= 1;
			for (int k = 0; k < r; k++) {
				if (l + k > sizes[j] + 1) continue;
				data[j][l + k] = (data[j][l + k] + 1 ) % 256;
			}
		}
	}
}

#undef int
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
	return 0;
}
