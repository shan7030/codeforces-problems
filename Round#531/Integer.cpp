#include<iostream>
using namespace std;
#define ll long long int

int main()
{

	ll n;
	cin>>n;
	ll sum=0;
	if(n%4==0 || n%4==3)
	{
	cout<<"0"<<endl;
	}
	else
	{
		cout<<"1"<<endl;
	}
	//cout<<std::abs(sum)<<endl;
return 0;
}
