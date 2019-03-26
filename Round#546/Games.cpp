#include<iostream>
using namespace std;
#define ll long long int

int main()
{

ll n,k;
cin>>n>>k;

ll count=2;
ll diff1=k-1;
ll diff2=n-k;

//cout<<diff1<<"::"<<diff2<<endl;

if(diff1==0)
{
	diff1=diff2;
		
	count=count+3+diff1;
	diff1--;
	count=count+diff1*2;
	
	

}
else if(diff2==0)
{
	diff2=diff1;
	count=count+3+diff2;
	diff2--;
	count=count+diff2*2;
	
}
else if(diff1<diff2)
{
	count=count+4;
	diff1--;
	count=count+diff1*3;
	
	count=count+diff1+1;
	count=count+diff2*3;
	
	
}
else
{
	ll temp=diff1;
	diff1=diff2;
	diff2=temp;


	count=count+4;
	diff1--;
	count=count+diff1*3;
	
	count=count+diff1+1;
	count=count+diff2*3;	
}

cout<<count<<endl;

return 0;
}
