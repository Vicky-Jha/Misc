//Complexity O(n.(n^2))
//08.09.2020

#include<iostream>
#include<vector>

#define lli long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

	int n;
	cout<<"Enter size of array\n";
	cin>>n;
	vector<int> ar(n);
	for(auto &x : ar)
	cin>>x;
	int target;
	cout<<"Enter target sum\n";
	cin>>target;
	
	
	for(int mask = 0 ; mask < (1 << n) ; ++mask)
	{
		long long sum_of_this_subsets =0;
		for(int i=0 ; i<n ; ++i)
		if(mask & ( 1<<i)){
		//cout<<"Mask "<<mask<<" ";
		//cout<<(mask & (1 << i))<<" "<<(1<<i)<<" "<<ar[i]<<" "<<i<<"\n";
		sum_of_this_subsets += ar[i];
		}
		
		if(sum_of_this_subsets == target)
		{
			puts("YES\n");
			break;
		}
	}
	
    return 0;
}
