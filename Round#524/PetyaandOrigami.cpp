#include<iostream>
using namespace std;
#define ll long long int

int main()
{
ll n,k;
cin>>n>>k;

ll countofr=n*2;
ll countofg=n*5;
ll countofb=n*8;

if(countofr%k==0)
{
	countofr=countofr/k;
	
}
else
{
	countofr=countofr/k+1;

}

if(countofg%k==0)
{
	countofg=countofg/k;
	
}
else
{
	countofg=countofg/k+1;

}

if(countofb%k==0)
{
	countofb=countofb/k;
	
}
else
{
	countofb=countofb/k+1;

}

cout<<(countofr+countofb+countofg)<<endl;


return 0;
}
