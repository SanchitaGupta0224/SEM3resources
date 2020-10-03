#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		(n%2==0)?cout<<(n/2)<<endl:cout<<((n+1)/2)<<endl;
	}
 	return 0;
}

