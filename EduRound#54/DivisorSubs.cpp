#include<iostream>
#include<math.h>
using namespace std;
#define ll long long int


int main()
{

ll n;
cin>>n;

ll count=0;
	ll ans=1;
	for(int p = 2; p <= (int)sqrt(n); ++p)
		if(n % p == 0)
		{
			if(p % 2 == 1)
				ans = (n - p) / 2 + 1;
			else
				ans = n / 2;
			break;
		}

cout<<ans<<endl;
return 0;
}
