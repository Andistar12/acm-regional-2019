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
    vector<double> boost;
    vector<double> die;
    vector<double> ang;

    for(int i = 0; i < n; i++){
        double a,b,c;
        cin >> a >> b >> c;
        boost.push_back(a);
        die.push_back(b);
        ang.push_back(c);
    }


}

#undef int
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
	return 0;
}
