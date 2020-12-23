
#include <iostream>
#include <vector>

#define lli long long int
using namespace std;
vector<int> subset;
vector<int> nums;
void print(int i)
{
	if(i==0)
	cout<<"Printing 1 current\n";
	else
	cout<<"Printing 2 current\n";
	
	for(auto x: subset)
        cout<<x<<" ";
        cout<<"\n";
}
void search(int k, int n)
{
	//cout<<"Current stack S("<<k<<")"<<"\n";
    if(k == n)
    {
		//cout<<"Printing subset\n";
        for(auto x: subset)
        cout<<x<<" ";
        cout<<"\n";
    }
    else
    {
        search(k+1,n);
        subset.push_back(nums[k]);
        //print(0);
        search(k+1,n);
        subset.pop_back();
        //print(1);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    nums.resize(n);
    for(auto &x :nums)
    cin>>x;
    search(0,n);


    return 0;
}
