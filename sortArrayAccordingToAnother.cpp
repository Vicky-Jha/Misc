#include <bits/stdc++.h>
#include <assert.h>
#define lli long long int
#define mod 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> according = {32, 12, 65, 23, 10};
    vector<pair<int, int>> vp = {{1,0}, {2,1}, {3,2}, {4,3}, {5,4}};
    sort(vp.begin(), vp.end(), [&](pair<int, int> a, pair<int, int> b){
		return according[a.second] < according[b.second];
	});
	int i = 0;
	for(auto x : vp) arr[i++] = x.first;

    return 0;
}
