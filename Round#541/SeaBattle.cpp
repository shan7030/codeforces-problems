#include<iostream>
using namespace std;
#define ll long long int 

int main()
{

ll h1,w1,h2,w2;

cin>>w1>>h1>>w2>>h2;

ll ans=0;

if(w1==w2)
{
	ans=w1+w2+2*h1+2*h2+4;
}
else
{
	ans=w1+w2+h1+h2+(h1)+h2+w1-w2-1+5;
}

cout<<ans<<endl;


return 0;
}
