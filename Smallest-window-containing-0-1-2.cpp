//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string S) {
        int zero=-1, one=-1, two=-1,result=10e+1;
        for(int i=0;i<S.length();++i){
            if(S[i]=='0') zero=i;
            if(S[i]=='1') one=i;
            if(S[i]=='2') two=i;
            
            if(zero==-1 || one==-1 || two==-1) continue;
            
            int minimum=min(min(zero,one),two);
            int maximum=max(max(zero,one),two);
            result=min(result,(maximum-minimum+1));
        }
        
        return (result==10e+1? -1:result);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}
// } Driver Code Ends