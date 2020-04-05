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
		string str,ans="";
		cin>>str;
		int n=str.length(),i,j,k;
		int tp=str[0]-'0';
		while(tp>0) 
		{
			ans+='(';tp--;
		}
		ans+=str[0];
		for(i=1;i<n;i++)
		{
			char a=str[i],b=ans[ans.length()-1];
			if(a<b)
			{
				tp=b-a;
				while(tp>0) 
				{
					ans+=')';tp--;
				}
				ans+=a;
			}
			else if(a>b)
			{
				tp=a-b;
				while(tp>0) 
				{
					ans+='(';tp--;
				}
				ans+=a;
			}
			else ans+=a;
			if(i==n-1)
			{
				tp=a-'0';
				while(tp>0) 
				{
					ans+=')';tp--;
				}
				break;
			}
		}
		if(n==1)
		{
			tp=ans[ans.length()-1]-'0';
			while(tp>0) 
			{
				ans+=')';tp--;
			}
		}
		cout<<"Case #"<<l<<": "<<ans<<endl;
	}
	return 0;
}