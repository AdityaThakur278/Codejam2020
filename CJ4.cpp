#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
#define ll long long int
#define ssd ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 998244353
#define ordered_set tree<ll, null_type, less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>
#define trace(x) cerr<<#x<<" : "<<x<<endl;
using namespace std;
using namespace __gnu_pbds;

int main()
{
	ssd
	int t,b,i,j,k;
	char tp;
	cin>>t>>b;
	vector<int> v;
	for(i=0;i<t;i++)
	{
		for(j=0;j<b;j++)
		{
		    cout<<j+1<<endl;
			cin>>k;
			v.push_back(k);
		}
		for(int j:v) cout<<j; cout<<endl;
		cin>>tp;
		if(tp=='N') break;
		v.clear();
	} 
	return 0;
}