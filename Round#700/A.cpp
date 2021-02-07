#include<iostream>
using namespace std;
#define ll long long int

int main()
{

ll t;
cin>>t;

string s;
while(t--) {
	cin>>s;
	int count=0;
	for(int i=0;i<s.length();i++)
	{
		if(count%2==1)
		{
			if(s[i]!='z')
			s[i]='z';
			else
			s[i]='y';
		}
		else
		{
			if(s[i]!='a')
			s[i]='a';
			else
			s[i]='b';
		}
		count++;
	}
	cout<<s<<endl;
}

return 0;
}
