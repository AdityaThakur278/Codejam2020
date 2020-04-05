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
	int t;
	cin>>t;
	for(int l=1;l<=t;l++)
	{
		int n,i,j,k;
		cin>>n;
		int arr[n][n];
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>arr[i][j];
			}
		}
		int c1=0,c2=0;
		set<int> s;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				s.insert(arr[i][j]);
			}
			if(s.size()<n) c1++;
			s.clear();
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				s.insert(arr[j][i]);
			}
			if(s.size()<n) c2++;
			s.clear();
		}
		int sum=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i==j) sum+=arr[i][j];
			}
		}
		cout<<"Case #"<<l<<": "<<sum<<" "<<c1<<" "<<c2<<endl;
	}
	return 0;
}