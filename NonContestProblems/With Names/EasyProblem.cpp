#include<iostream>
#include<vector>
using namespace std;
#define ll long long int

int main()
{

	ll n;
	string s;
	cin>>n;
	cin>>s;
	ll h=0,a=0,r=0,d=0;
	ll hard=0;
	for(ll i=0;i<n;i++)
	{
		ll yu;
		cin>>yu;
		if(s[i]=='h')
			h=h+yu;
		else if(s[i]=='a')	
			a=a+yu;
		else if(s[i]=='r')
			r=r+yu;
		else if(s[i]=='d')
			d=d+yu;
		if(h!=0 && a!=0 && r!=0 && d!=0)
		{
			ll min=h<a?h:a;
			min=min<r?min:r;
			min=min<d?min:d;
			hard=hard+min;
			h=0;a=0;r=0;d=0;
		}
	}
	cout<<hard<<endl;

return 0;
}
