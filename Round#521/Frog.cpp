#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
ll t;
cin>>t;
while(t--)
{
ll r,l,time;
cin>>r>>l>>time;
ll finall=r*((time/2)+time%2)-l*(time/2);
cout<<finall<<endl;

}


return 0;
}
