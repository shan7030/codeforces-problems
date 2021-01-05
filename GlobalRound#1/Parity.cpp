#include<iostream>
#include<vector>
using namespace std;
#define ll long long int

int main()
{

ll b,k;
cin>>b>>k;

vector<ll> v(k);

ll countofodd=0;
ll countofeven=0;
for(ll i=0;i<k;i++)
{
	cin>>v[i];
	if(v[i]%2==1)
	countofodd++;
	else
	countofeven++;
}
if(b%2==0)
{
	if(v[k-1]%2==0)
	{
		cout<<"even"<<endl;
	}
	else
	{
		cout<<"odd"<<endl;
	}
}
else
{
	if(countofodd%2==1)
	{
		cout<<"odd"<<endl;
	}
	else
	{	
		cout<<"even"<<endl;
	}
	

}




return 0;
}
