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
#include<map>
#include<queue>
#include<stack>
#include<string>
#include<vector>
#define int long long
#define double long double
using namespace std;

void solve() {
	int n,m;
	cin >> n >> m;
	auto vv = new vector<int>[n];
	int jj, ii;
	for( int i = 0; i < m ; i++){
		cin >> ii >> jj;
		vv[ii-1].push_back(jj-1);
	}
	auto vis = new int[n];
	for(int i = 0; i < n; i++){
		vis[i] = -1;
	}
	queue<int> q;
	vis[0] = 0;
	q.push(0);
	while(vis[n-1] == -1){
		int o = q.front();
		if(o == n-1){
		    break;
		}
		for (auto a = vv[o].begin(); a != vv[o].end(); a++) {
            if (vis[*a] == -1) {
                vis[*a] = vis[o] + 1;
                q.push(*a);
            }
		}
		q.pop();
	}
	cout << vis[n-1] - 1 << endl;
	
	
}

#undef int
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
	return 0;
}
