#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		ll k;
		cin>>n>>k;
		vector<int> arr;
		for(int i=0; i<n; i++)
		{
			int a;
			cin>>a;
			arr.push_back(a);
		}
		if(k%2==0)
		{
			for(int j=0; j<2; j++)
			{
			int maxi=*max_element(arr.begin(), arr.end());
			for(int i=0; i<n; i++)
			{
				arr[i]=maxi-arr[i];
			}
			}
		}
		else
		{
			int maxi=*max_element(arr.begin(), arr.end());
			for(int i=0; i<n; i++)
			{
				arr[i]=maxi-arr[i];
			}
		}
		for(auto x:arr)
		cout<<x<<" ";
		cout<<endl;
	}

	
	
	
 	return 0;
}





/*




///////     //\       ///\    |||     ///////     ////    ///   |||||||||   ||||||||||    ///\
////       // \\	  /// \\  |||    //          ////    ///       ||          ||        //  \\
    ///   ///\\\\     ///  \\|||    //          ////||||///        ||          ||       ////\\\\
/////    /       \    ///   \\\|    ////////   ////    ///      ||||||||       ||      //       \





*/

