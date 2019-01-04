#include<iostream>
using namespace std;
#define ll long long int

int main()
{
ll n;
cin>>n;
string s;
cin>>s;
string ans="";

ll counter=1;
for(ll i=0;i<n;)
{
ans=ans+s[i];
i=i+counter;
counter++;

}
cout<<ans<<endl;

return 0;
}
