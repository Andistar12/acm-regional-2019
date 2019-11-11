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
	int n;
	cin >> n;
	vector<int> toll;
	int tmp;
	for(int i = 0; i < n; i++){
		cin >> tmp;
		toll.push_back(tmp);
	}

	vector<int> pths[n];
	vector<int> pi[n];
	vector<int> lens;
	for(int i = 0; i < n-1; i++)
	{
		int tmp2, tmp3;
		cin >> tmp >> tmp2 >> tmp3;

		lens.push_back(tmp3-1);
		pths[tmp-1].push_back(tmp2-1);
		pths[tmp2-1].push_back(tmp-1);
		pi[tmp-1].push_back(i);
		pi[tmp2-1].push_back(i);

	}
    vector<int>



}

#undef int
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
	return 0;
}
