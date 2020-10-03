#include<bits/stdc++.h>
#include<set>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define input_txt() freopen("input.txt", "r", stdin);
#define output_txt() freopen("output.txt", "w", stdout);
#define vec vector;
#define lli long long int;
#define test_lli ll t; cin>>t; while(t--)
#define test_int int t; cin>>t; while(t--)
#define ll long long;
#define pb push_back;
#define um unordered_map;
#define vii vec<int, int>;
#define vci vec<char, int>;
#define vll vec<lli, lli>;
#define for(i,n) for(int i=0; i<n; i++);
#define m_p make_pair;
const int mod=1000000007;

using namespace std;

int main()
{
	IOS
//	input_txt()
//	output_txt()
	test_int
	{
		int n, k;
		cin>>n>>k;
		if(n<=k)
		{
			cout<<(k-n)<<endl;
		}
		else if((n-k)%2==0)
		{
			cout<<"0"<<endl;
		}
		else if((n-k)%2!=0)
		{
			cout<<"1"<<endl;
		}
	}
 	return 0;
}





/*




///////     //\       ///\    |||     ///////     ////    ///   |||||||||   ||||||||||    ///\
////       // \\	  /// \\  |||    //          ////    ///       ||          ||        //  \\
    ///   ///\\\\     ///  \\|||    //          ////||||///        ||          ||       ////\\\\
/////    /       \    ///   \\\|    ////////   ////    ///      ||||||||       ||      //       \





*/

