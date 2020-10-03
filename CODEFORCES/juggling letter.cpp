#include<bits/stdc++.h>
#include<set>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define input_txt() freopen("input.txt", "r", stdin);
#define output_txt() freopen("output.txt", "w", stdout);
#define vec vector
#define lli long long int
#define test_lli ll t; cin>>t; while(t--)
#define test_int int t; cin>>t; while(t--)
#define ll long long
#define pb push_back
#define um unordered_map
#define vii vec<int, int>
#define vci vec<char, int>
#define vll vec<lli, lli>
#define m_p make_pair
const int mod=1000000007;

using namespace std;

/*

bool isPrime(int x)
{
	 if(x==1)
	 return false;
	 for(int i=2; i*i<=n; i++)
	 {
	  	if(x%i==0)
	  	{
			return false;
		}
	 }
	 return true;
}

*/

int main()
{
	IOS
//	input_txt()
//	output_txt()
	test_int
	{
		int n;
		cin>>n;
		char str[1000];
		um<char, int> mp;
		for(int i=0; i<n; i++)
		{
			cin>>str;
			for(int i=0; str[i]; i++)
			{
				mp[str[i]]++;
			}
		}
		int f=0;
		for(auto x:mp)
		{
			if(x.second%n!=0)
			{
				f=1;
				break;
			}
		}
		f==1?cout<<"NO"<<endl:cout<<"YES"<<endl;
		
	}
	return 0;
}




/*

///////     //\       ///\    |||     ///////     ////    ///   |||||||||   ||||||||||    ///\
////       // \\	  /// \\  |||    //          ////    ///       ||          ||        //  \\
    ///   ///\\\\     ///  \\|||    //          ////||||///        ||          ||       ////\\\\
/////    /       \    ///   \\\|    ////////   ////    ///      ||||||||       ||      //       \


*/




