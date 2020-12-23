#include <bits/stdc++.h>
#define lli long long int
#define MAX_W 100
using namespace std;

bitset<MAX_W> can;
int main() {
	
	int n,target;
	cout<<"Enter Size of array and target\n";
	cin>>n>>target;
	vector<int> ar(n);
	cout<<"Enter array elements\n";
	for(int &x : ar)
	cin>>x;
	
	can[0] = true;
	for(int id = 0; id < n; id++) {
		can = can | (can << ar[id]); // or just: can |= (can << x);
	}
	puts(can[target] ? "YES" : "NO");
}
