#include<iostream>
#include<vector>
#include<map>
using namespace std;
#define ll long long int

int main()
{
ll n;
cin>>n;
vector<ll> v(n*n);
map<ll,ll> m;
for(ll i=0;i<(n*n);i++)
{
	cin>>v[i];
	m[v[i]]++;
}

if(n==1)
{
	cout<<"Yes"<<endl;
	cout<<v[0]<<endl;
	return 0;
}
if(n%2==0)
{
	map<ll,ll>::iterator it=m.begin();

	while(it!=m.end())
	{
		if(it->second%4!=0)
		{
			cout<<"No"<<endl;
			return 0;
		}
		else
		it->second=it->second/4;
		it++;
	}
	ll ans[n][n]={0};
	it=m.begin();
	for(ll i=0;i<(n/2);i++)
	{
		for(ll j=0;j<(n/2);j++)
		{
			ans[i][j]=it->first;
			it->second--;
			if(it->second==0)
			it++;			
		
		}
	}

	
	ll cnt=0;
	for(ll i=0;i<(n/2);i++)
	{
		cnt=0;
		for(ll j=n-1;j>=(n/2);j--)
		{
			ans[i][j]=ans[i][cnt];
			cnt++;
		}
	}


	cnt=0;
	for(ll i=n-1;i>=(n/2);i--)
	{

		for(ll j=0;j<n;j++)
		{
			ans[i][j]=ans[cnt][j];
		}
		cnt++;
	}
	
	cout<<"Yes"<<endl;
	for(ll i=0;i<(n);i++)
	{
		for(ll j=0;j<(n);j++)
		{
			cout<<ans[i][j]<<" ";
	
		}
		cout<<endl;
	}
	
}
else
{
	map<ll,ll>::iterator it=m.begin();
	ll cnt=0;
	ll cnt2=0;
	ll noalone=-1;	
	vector<ll> twos;
	while(it!=m.end())
	{

		if(it->second%4==1 || it->second%4==3)
		{
			cnt++;
			if(cnt>=2)
				{

					cout<<"No"<<endl;
					return 0;
				}
			noalone=it->first;
			it->second=it->second-1;
				if(cnt>=2)
				{
					cout<<"No"<<endl;
					return 0;
				}
		}
		if(it->second%4==2)
		{
			cnt2++;	
			twos.push_back(it->first);
			
			it->second=it->second-2;
				if(cnt2>(n-1))
				{	

					cout<<"No"<<endl;
					return 0;
				}
		}
		
		
		 if(it->second%4==0)
		{
			it->second=it->second/4;

		}
		else
		{


			cout<<"No"<<endl;return 0;
		}
		it++;	
		
		

	}
	ll ans[n][n];
	ans[n/2][n/2]=noalone;

	it=m.begin();

	while(it->second==0 && it!=m.end())
	{

		it++;
	
	}
	for(ll i=0;i<(n/2);i++)
	{
		for(ll j=0;j<(n/2);j++)
		{
			ans[i][j]=it->first;
			it->second--;
			if(it->second==0)
			{
				while(it->second==0 && it!=m.end())
					it++;
			}
		}

	}

		it=m.begin();
	while(it!=m.end())
	{
		if(it->second!=0)
		{	
			while(it->second!=0)
			{
			twos.push_back(it->first);
			twos.push_back(it->first);
			it->second--;
			}
		}
		it++;
	}


	cnt=0;

	for(ll i=0;i<n/2;i++)
	{
		ans[n/2][i]=twos[i];
		ans[n/2][n-1-i]=twos[i];
		cnt++;
	}
		
	for(ll i=0;i<n/2;i++)
	{
		ans[i][n/2]=twos[cnt];
		ans[n-1-i][n/2]=twos[cnt];
		cnt++;
	}
	 cnt=0;
	for(ll i=0;i<(n/2);i++)
	{
		cnt=0;
		for(ll j=n-1;j>=(n/2);j--)
		{
			ans[i][j]=ans[i][cnt];
			cnt++;
		}
	}


	cnt=0;
	for(ll i=n-1;i>=(n/2);i--)
	{

		for(ll j=0;j<n;j++)
		{
			ans[i][j]=ans[cnt][j];
		}
		cnt++;
	}
	
	cout<<"Yes"<<endl;
	for(ll i=0;i<(n);i++)
	{
		for(ll j=0;j<(n);j++)
		{
			cout<<ans[i][j]<<" ";
	
		}
		cout<<endl;
	}
}

return 0;
}
