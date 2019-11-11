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
	int n, k;
    cin >> n >> k;
    auto s = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    vector<int> nums;
    auto indices = new int[k];
    fill(indices, indices+k, -1);
    for (int i = 0; i < n; i++) {
	if (indices[s[i]-1] == -1) {
		nums.push_back(s[i]);
		indices[s[i]-1] = i;
	} else {
		int index = indices[s[i]-1];
		if (index < nums.size() - 2) {
			if (nums[index] > nums[index+1]) {
			for (int j = index; j < nums.size(); j++) {
				nums[j] = nums[j+1];
			}
			nums[nums.size()-1] = s[i];
			indices[s[i]-1] = i;
			}
		}
	}
    }
	string sep = "";    
    for(auto n = nums.begin(); n != nums.end(); n++) {
	cout << sep << *n;
	sep = " ";
    }
    cout << endl;
}

#undef int
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
	return 0;
}
