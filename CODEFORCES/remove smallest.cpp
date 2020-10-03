#include<bits/stdc++.h>
#define ll long long int
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
		int arr[n];
		int count=n;
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];	
		}	
		if(n==1)
		{
			cout<<"YES"<<endl;
		}
		else
		{
		sort(arr, arr+n);
		for(int i=0; i<n-1; i++)
		{
			if(abs(arr[i]-arr[i+1])<=1)
			{
				count--;		
			}
			if(arr[i+1]<arr[i])
			{
				arr[i+1]=arr[i];		
			}		
		}
		if(count==1)
		{
			cout<<"YES"<<endl;
		}
		else
		cout<<"NO"<<endl;
		}
	
}
 	return 0;
}

