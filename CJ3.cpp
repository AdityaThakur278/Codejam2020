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
		vector<pair<int,int>> v,tmp;
		map<pair<int,int>,vector<char>> kk;
		for(i=0;i<n;i++)
		{
			cin>>j>>k;
			v.push_back({j,k});
		}
		tmp=v;
		sort(v.begin(),v.end());
		int c1=0,c2=0;
		string ans="";
		bool f=false;
		for(i=0;i<n;i++)
		{
			int a=v[i].first,b=v[i].second;
			if(c1<=a) 
			{
				kk[{a,b}].push_back('C');
				c1=b;
			}
			else if(c2<=a)
			{
				kk[{a,b}].push_back('J');
				c2=b;
			} 
			else 
			{
				f=true;
				break;
			}
		}
		if(f) cout<<"Case #"<<l<<": "<<"IMPOSSIBLE"<<endl;
		else 
		{
			cout<<"Case #"<<l<<": ";
			for(i=0;i<n;i++)
			{
				int a=tmp[i].first,b=tmp[i].second;
				cout<<kk[{a,b}][0];
				kk[{a,b}].erase(kk[{a,b}].begin());
			}	
			cout<<endl;
		}
	}
	return 0;
}