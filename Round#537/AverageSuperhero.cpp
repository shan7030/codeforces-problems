#include<iostream>
#include<vector>
#include<algorithm>
#include <iomanip>    
using namespace std;
#define ll double

int main()
{

double n,m,k;

cin>>n>>k>>m;

vector<double> v(n);

double sum=0;
for(ll i=0;i<n;i++)
{
	cin>>v[i];
	sum=sum+v[i];
}

if(n==1)
{
	double tobeadd=k<m?k:m;
	cout<<std::fixed<<endl;
	cout<<setprecision(20)<<(v[0]+tobeadd)<<endl;
	return 0;
}

double sum2=sum/n;
	
//cout<<"Initial Average of all :"<<sum2<<endl;

ll totaladd=(n*k)<m?(n*k):m;
//cout<<"Total can be added:"<<totaladd<<endl;
double ans3=(sum+totaladd)/n;
//cout<<"Average after total addition of all :"<<ans3<<endl;
sort(v.begin(),v.end());

double sum4=0;
for(double i=0;i<(n-1);i=i+1)
{
	sum4=sum4+v[i];
	double rem=totaladd-(i+1);
	if(rem<0)
	break;

	double maxhere=rem<((n-1-i)*k)?rem:((n-1-i)*k);
	double canbe=(sum-sum4+maxhere)/(n-1-i);
	//cout<<sum<<" "<<sum4<<" "<<canbe<<endl;
	//cout<<canbe<<" "<<i<<endl;
	if(canbe>ans3)
	{
		ans3=canbe;
	}
}
    std::cout << std::fixed;
cout<<std::setprecision(20)<<ans3<<endl;
/*
if(sum4>ans3)
{
	cout<<setprecision(6)<<sum4<<endl;
}	
else
{
	cout<<setprecision(6)<<ans3<<endl;
}*/

return 0;
}
