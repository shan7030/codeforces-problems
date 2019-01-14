#include<iostream>
using namespace std;
#define ll long long int

int main()
{

ll t;
cin>>t;

while(t--)
{
	ll start,end;
	cin>>start>>end;
	
	ll counter1=end-start+1;
	if(start%2==0)
	{
		ll sum=0;
		if(counter1%2==0)
		{
			//cout<<counter1<<endl;
			counter1=counter1/2;
			sum=sum+((counter1)*(2*start+(counter1-1)*2))/2;
			//cout<<sum<<endl;			
			start++;
			sum=sum-((counter1)*(2*start+(counter1-1)*2))/2;
			
			cout<<sum<<endl;	
		}
		else	
		{
					//cout<<counter1<<endl;
			counter1=counter1/2+1;
			sum=sum+((counter1)*(2*start+(counter1-1)*2))/2;
			//cout<<"SUM"<<sum<<endl;			
			start++;
			//cout<<"START:"<<start<<endl;
			counter1--;
			
			sum=sum-((counter1)*(2*start+(counter1-1)*2))/2;
			
			cout<<sum<<endl;	
			
		}	
	}
	else
	{
		ll sum=0;
		if(counter1%2==0)
		{
			//cout<<counter1<<endl;
			counter1=counter1/2;
			sum=sum-((counter1)*(2*start+(counter1-1)*2))/2;
			//cout<<sum<<endl;			
			start++;
			sum=sum+((counter1)*(2*start+(counter1-1)*2))/2;
			
			cout<<sum<<endl;	
		}
		else	
		{
					//cout<<counter1<<endl;
			counter1=counter1/2+1;
			sum=sum-((counter1)*(2*start+(counter1-1)*2))/2;
			//cout<<"SUM"<<sum<<endl;			
			start++;
			//cout<<"START:"<<start<<endl;
			counter1--;
			
			sum=sum+((counter1)*(2*start+(counter1-1)*2))/2;
			
			cout<<sum<<endl;	
			
		}
	}

}


return 0;
}
