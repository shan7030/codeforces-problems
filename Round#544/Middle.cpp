#include<iostream>
using namespace std;
#define ll long long int

int main()
{

	string s1,s2;
	cin>>s1>>s2;

	ll h1=(s1[0]-48)*10+s1[1]-48;
	ll h2=(s2[0]-48)*10+s2[1]-48;

	ll m1=(s1[3]-48)*10+s1[4]-48;
	ll m2=(s2[3]-48)*10+s2[4]-48;

	ll midmin=(m1+m2)/2;
	ll midhr=(h1+h2)/2;
		
	if(h1%2==1 && h2%2==0)
	{
		midmin=midmin+30;
		if(midmin>=60)
		{
		midhr++;

		midmin=midmin-60;

		}
		
	}
	else if(h2%2==1 && h1%2==0)
	{
		
		midmin=midmin+30;
		if(midmin>=60)
		{
		midhr++;

		midmin=midmin-60;
		}
	}

	if(midhr/10==0 || midmin/10==0)
	{

			if(midhr/10!=0)
			{
				cout<<midhr<<":";
			}
			else
			{
				cout<<"0"<<midhr<<":";
			}

			if(midmin/10!=0)
			{
				cout<<midmin<<endl;
			}
			else
			{
				cout<<"0"<<midmin<<endl;
			}
	}
	else 		
	{
		cout<<midhr<<":"<<midmin<<endl;
	}
	



return 0;
}
