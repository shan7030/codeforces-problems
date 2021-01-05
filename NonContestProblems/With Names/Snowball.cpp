#include<iostream>
using namespace std;
#define ll long long int

int main()
{

ll w,h;
cin>>w>>h;
ll w1,h1,w2,h2;
cin>>w1>>h1>>w2>>h2;

while(h>=0)
{
	//cout<<w<<endl;
	
		w=w+h;	
	if(h==h1)
	{
		w=w-w1;
		if(w<0)
		w=0;
	}
	else if(h==h2)
	{			
		w=w-w2;
		if(w<0)
		w=0;
	}
	
	
	h--;

}
cout<<w<<endl;

return 0;
}
