#include <bits/stdc++.h>
#define lli long long int
using namespace std;

     int findMaximumXOR(vector< int >& nums) {
         int res = 0 , mask = 0 ;
         for ( int i = 31 ; i >= 0 ; --i) {
			 //cout<<"{\n";
            mask |= ( 1 << i);
            //bitset<32> m(mask);
            //cout<<"mask = "<<m<<"\n";
            unordered_set < int > s;
             for ( int num: nums) {
				 //cout<<num<<" & mask ="<<(num&mask)<<"\n";
                s.insert(num & mask);
            }
            int t = res | ( 1 << i);
            //bitset<32> tes(t),r(res);
            //cout<<"t = "<<tes<<"\n";
            //cout<<"res = "<<r<<"\n";
            //cout<<"set elements when i = "<<i<<"\n";
             for ( int prefix: s) {
				 //cout<<prefix<<" ";
                 if (s.count(t ^ prefix)) {
					//cout<<"res is changing\n";
                    res = t;
                     break ;
                }
            }
            //cout<<"Set elements are "<<"\n";
            //for(int p : s)
            //cout<<p<<" ";
            //cout<<"\n}\n";
        }
        return res;
	}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<int> nums = {3, 10, 5, 25, 2, 8};
    cout<<findMaximumXOR(nums)<<"\n";
    return 0;
}
