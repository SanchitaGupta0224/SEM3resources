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
		int n, m;
		cin>>n>>m;
		char arr[n][m];
		int count=0;
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			{
				cin>>arr[i][j];
			}
			
		}
		if(n==1 && m==1)
		cout<<"0"<<endl;
		else
		{
		
		for(int i=0; i<n; i++)
		{
			if(arr[i][m-1] != 'D')
			count++;
		}
		for(int i=0; i<m; i++)
		{
			if(arr[n-1][i] != 'R')
			count++;
		}
		
		cout<<count-2<<endl;
		}
	}
	
	
	
 	return 0;
}

