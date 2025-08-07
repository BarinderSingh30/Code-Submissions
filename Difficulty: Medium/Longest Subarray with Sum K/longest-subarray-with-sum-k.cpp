class Solution {
  public:
    int longestSubarray(vector<int>& arr, long long k) {
        // code here
        unordered_map<int,int> presum;
        long long sum = 0;
        int maxlen = 0;
        
        
        
        for(int i =0;i<arr.size();i++){
            sum+=arr[i];
            
            if(sum ==k){
                maxlen = max(maxlen,i+1);
            }
            
            long long rem = sum - k;
            
            if(presum.find(rem)!=presum.end()){
                maxlen = max(maxlen,i-presum[rem]);
            }
            
            if(presum.find(sum)==presum.end()){
            presum[sum] = i;
            }
            
            
            
            
        }
        return maxlen;
    }
};