//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int TotalWays(int N)
	{
	    // Code here
	
	    long mod=1000000007;
	    long a=1,b=1,sum=0;
	    for(int i=0;i<N;++i){
	        sum=(a%mod + b%mod)%mod;
	        a=b%mod;
	        b=sum%mod;
	    }
	    return (int)((sum*sum)%mod);
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends