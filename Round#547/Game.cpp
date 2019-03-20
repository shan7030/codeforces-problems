#include<iostream>
using namespace std;
#define ll long long int

int main()
{

ll n,m;
cin>>n>>m;

ll countoftwo=0;
ll countofthree=0;

while(m%2==0 || m%3==0)
{
	if(m%2==0)
	{
		countoftwo++;
		m=m/2;
	}
	else if(m%3==0)
	{
		countofthree++;
		m=m/3;
	}
	else
	break;
}

ll count1=0;
ll count2=0;


while(n%2==0 || n%3==0)
{
	if(n%2==0)
	{
		count1++;
		n=n/2;
	}
	else if(n%3==0)
	{
		count2++;
		n=n/3;
	}
	else
	break;
}


if(m!=n)
{
	cout<<"-1"<<endl;
}
else if(countoftwo<count1 || countofthree<count2)
{
	cout<<"-1"<<endl;
}
else
{
	cout<<(countoftwo-count1 + countofthree-count2)<<endl;
}



return 0;
}
