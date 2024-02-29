class Solution{
public:
	long long sumBitDifferences(int arr[], int n) {
        long long ans = 0;
        
        for(int i = 31; i > -1; i--) {
            long long bit_ans = 0;
            
            for(int j = 0; j < n; j++) {
                bit_ans += (arr[j] >> i) & 1;
            }
            
            ans += 2LL * bit_ans * (n - bit_ans);
        }
        
        return ans;
	}
};
