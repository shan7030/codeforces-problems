#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
#define ll long long int
# define M_PI   3.14159265358979323846
int main()
{

	double n,r;
	cin>>n>>r;
	double angle=(n-2)*M_PI/n;
	//cout<<angle<<endl;
	double cosans=cos(angle/2);
	cosans=(r*(cosans))/(1-cosans);
	cout<<fixed<<setprecision(7);
	cout<<(cosans)<<endl;

return 0;
}
