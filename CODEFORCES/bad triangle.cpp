#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector <int> arr;
		for(int i=0; i<n; i++)
		{
			int a;
			cin>>a;
			arr.push_back(a);
		}
		if(arr[0]+arr[1]<=arr[n-1])
		cout<<"1 2 "<<n<<endl;
		else
		cout<<"-1"<<endl;		
	}
 	return 0;
}

