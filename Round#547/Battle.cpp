#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
ll h,n;
cin>>h>>n;

vector<ll> v(n);
ll sum=0;

for(ll i=0;i<n;i++)
{
	cin>>v[i];
	sum=sum+v[i];
}

if(h<=0)
{
	cout<<"0"<<endl;
}
else if(sum>=0)
{
		vector<ll> tofind(n),me(n);
		tofind[0]=v[0];
		me[0]=v[0];
		ll cou=0;
		
		if(tofind[0]<0)
		cou++;
		
		for(ll i=1;i<n;i++)
		{
			tofind[i]=tofind[i-1]+v[i];
			me[i]=tofind[i];
			if(tofind[i]<0)
			cou++;
		}

		//cout<<cou<<endl;
		sort(tofind.begin(),tofind.end());
		ll small=tofind[0];
		//cout<<small<<endl;
		if(cou==0)
		{
			cout<<"-1"<<endl;	
		}
		else if(h+small>0)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			
			ll kj=0;
			for(ll i=0;i<n;i++)
			{		
				kj++;
				if(h+me[i]<0)
				{
					kj--;
					break;
				}
				else if(h+me[i]==0)
				{
					break;
				}

			}
			
			if(kj==n)
			{
				cout<<"-1"<<endl;
			}
			else
			{
				cout<<kj<<endl;
			}
		}
}
else
{
	/*if(sum>=0)
	{
		cout<<"-1"<<endl;
	}	
	else
	{*/
		vector<ll> tofind(n);
		tofind[0]=v[0];
		ll cou=0;
		
		if(tofind[0]<0)
		cou++;
		
		for(ll i=1;i<n;i++)
		{
			tofind[i]=tofind[i-1]+v[i];
			if(tofind[i]<0)
			cou++;
		}
		vector<ll> maybeans;

		if(cou==0 && h>0)
		{
			cout<<"-1"<<endl;
			return 0;
		}
		
		
		for(ll i=0;i<n;i++)
		{
			ll startcount=i+1;
			ll summer=h+tofind[i];
			if(summer>0 )
			{
				if(sum==0)
				{
					cout<<"-1"<<endl;return 0;
				}
				ll div=summer/abs(sum);
				ll rem=summer-div*abs(sum);
				//cout<<rem<<endl;
				startcount=startcount+div*n;
	
				if(rem>0)
				startcount=startcount+n;
			}		
			maybeans.push_back(startcount);
		}

		sort(maybeans.begin(),maybeans.end());
		cout<<maybeans[0]<<endl;
		
}

return 0;
}
