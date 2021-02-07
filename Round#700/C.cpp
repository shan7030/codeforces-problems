#include<iostream>
using namespace std;
#define ll long long int


int main()
{
	ll n;
	cin>>n;
	
		string output = "? "+to_string(1);
		cout<<output<<endl;
		cout.flush() ;		
		
		ll val1;
		cin>>val1;

		output = "? "+to_string(2);
		cout<<output<<endl;
		cout.flush() ;		
		
		ll val2;
		cin>>val2;

		output = "? "+to_string(n-1);
		cout<<output<<endl;
		cout.flush() ;		
		
		ll val3;
		cin>>val3;

		output = "? "+to_string(n);
		cout<<output<<endl;
		cout.flush() ;		
		
		ll val4;
		cin>>val4;

	if(val1<val2)
	{
		cout<<"! "+to_string(1)<<endl;
		cout.flush();
		return 0;
	}

	if(val4<val3)
	{
		cout<<"! "+to_string(n)<<endl;
		cout.flush();
		return 0;
	}


	ll k=val1;	
	while(true)
	{
		string output = "? "+to_string(k);
		cout<<output<<endl;
		cout.flush() ;		
		
		

		ll val;
		cin>>val;

		if(val==1)
		{
			output = "! "+to_string(k);
			cout<<output<<endl;
			cout.flush() ;
			break;
		}
		
		k=val;		
	}

return 0;
}
