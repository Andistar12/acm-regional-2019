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
#include <set>

#define int long long
#define double long double
using namespace std;

struct P {
	int x;
	int y;
	friend bool operator==(const P p, const P q) {
	    return p.x == q.x && p.y == q.y;
	}
};
struct Dasdf {
	int a;
	int b;
	int c;
};

void solve() {
	int n;
	cin >> n;
	vector<Dasdf> hor;
	vector<Dasdf> ver;
	char ch;
	int a, b, c;
	for (int i = 0; i < n; i++) {
		cin >> ch >> a >> b >> c;
        Dasdf asdf{a, b, c};
		if (ch == 'h') {
			hor.push_back(asdf);
		} else {
			ver.push_back(asdf);
		}
	}

	vector<P> pts;

	for (auto h = hor.begin(); h != hor.end(); h++) {
	    for (auto v = ver.begin(); v != ver.end(); v++) {
	        int t1 = v->c - 1 + h->a;
	        int t2 = t1 + h->b;
	        int t3 = h->c - 1 + v->a;
	        int t4 = t3 + v->b;

	        if ((t1 <= t3 && t3 <= t2) || (t1 <= t4 && t4 <= t2)) {

	            P p{h->c, v->c};

	            if (find(pts.begin(), pts.end(), p) == pts.end()) {
	                pts.push_back(p);
	            }

	        }
	    }
	}

	cout << pts.size() << "\n";
	
}

#undef int
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
	return 0;
}
