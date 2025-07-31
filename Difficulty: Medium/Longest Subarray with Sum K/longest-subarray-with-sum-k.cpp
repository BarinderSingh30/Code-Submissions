class Solution {
  public:
    int longestSubarray(vector<int>& arr, long long k) {
        // code here
        unordered_map<long long,int> presum;
        
        long long sum = 0;
        int maxlen = 0;
        
        
        for(int i =0;i<arr.size();i++){
            
            // sum for the prefix sum
            sum +=arr[i];
            
            //if we get sum k from the subarray of first element.
            if(sum == k){
                maxlen = max(maxlen, i+1);
            }
            
            //reverse engineering trick check in hashmap if we find remaining (sum -k) in the map
            long long rem = sum - k;
            
            if(presum.find(rem)!=presum.end()){
                int len = i - presum[rem];
                maxlen = max(maxlen,len);
            }
            
            if(presum.find(sum)==presum.end()){
                presum[sum] = i;
            }
            
        }
        return maxlen;
    }
};