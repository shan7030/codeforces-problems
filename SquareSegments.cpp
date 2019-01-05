#include<iostream>
using namespace std;
#define ll long long int

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;


if(n==1)
{
	cout<<"2"<<endl;
}
else if(n==2)
{
	cout<<"3"<<endl;
}
else 
{
	ll start=4;
	ll diff=4;
	ll ender=n-2;
	while(ender>0)
	{
		ender=ender-diff;
		diff=diff+2;
	}
	//cout<<ender<<endl;
	//cout<<(diff-2)<<endl;
	ll diff1=(diff-2)/2;
	diff=diff-2;
			
	if((ender*-1)>=diff1)
	{		
		ll k=(diff-2)/2;
		//cout<<k<<endl;
		k=k*2-1;
		cout<<k+3<<endl;
	}
	else
	{
		ll k=(diff-2)/2;
		//cout<<k<<endl;			
		k=k*2;
		cout<<k+3<<endl;
	}
}



return 0;
}
