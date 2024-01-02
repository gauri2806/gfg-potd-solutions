//{ Driver Code Starts
// C++ program to find largest subarray sum with
// at-least k elements in it.
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:    
    long long int maxSumWithK(long long int a[], long long int n, long long int k) 
    {
        vector<long long> max_sum(n+1,0);
        for(int i=n-1;i>-1;--i){
            max_sum[i]=a[i]+max_sum[i+1];
            max_sum[i]=max(max_sum[i],0LL);
        }
        
        long long ans=-1e18;
        long long curr_sum=0;
        
        for(int i=0;i<k;++i) curr_sum+=a[i];
        
        for(int i=k;i<n;++i){
            long long sum=curr_sum+max_sum[i];
            ans=max(ans,sum);
            
            curr_sum+=a[i];
            curr_sum-=a[i-k];
        }
        return max(ans,curr_sum);
    }
    
};

//{ Driver Code Starts.

// Driver code
int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, k, i;
        cin >> n;
        long long int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> k;
        Solution ob;
        cout << ob.maxSumWithK(a, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends