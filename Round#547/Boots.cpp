#include<iostream>
#include<vector>
using namespace std;
#define ll long long int

typedef struct node
{
ll a11,a22;

}node;

int main()
{

ll n;
cin>>n;

string a;
string b;

cin>>a>>b;
vector<ll> vs;
vector<vector<ll> > v(26,vs);
vector<vector<ll> > v2(26,vs);

vector<ll> count1;

vector<ll> count2;

for(ll i=0;i<n;i++)
{
	if(a[i]!='?')
	v[a[i]-'a'].push_back(i+1);
	else
	count1.push_back(i+1);
}


for(ll i=0;i<n;i++)
{
	if(b[i]!='?')
	v2[b[i]-'a'].push_back(i+1);
	else
	count2.push_back(i+1);
}


ll anscount=0;
vector<node> ans;

		ll o=0;
		ll ko=0;
for(ll i=0;i<26;i++)
{
	ll k=0,m=0;
	while(k<v[i].size() && m<v2[i].size())
	{
		anscount++;
		node f;
		f.a11=v[i][k];
		f.a22=v2[i][m];
		ans.push_back(f);
		k++;m++;
	}
	if(k<v[i].size())
	{

			
		while(o<count2.size() && k<v[i].size())
		{
			node g;
			g.a11=v[i][k];
			g.a22=count2[o];
			k++;o++;
			ans.push_back(g);
		}
	}
	else if(m<v2[i].size())
	{
		while(m<v2[i].size() && ko<count1.size())
		{
			node g;
			g.a11=count1[ko];
			g.a22=v2[i][m];
			m++;
			ko++;
			ans.push_back(g);
		}
	}
}

while(ko<count1.size() && o<count2.size())
{
	node g;
	g.a11=count1[ko];
	g.a22=count2[o];
	ko++;o++;
	ans.push_back(g);
}

cout<<ans.size()<<endl;

for(ll i=0;i<ans.size();i++)
{
	cout<<ans[i].a11<<" "<<ans[i].a22<<endl;
}



return 0;
}
