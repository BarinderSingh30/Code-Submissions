class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        long long cursum = 0;
        long long maxsum = LONG_MIN;
        
        
        for(int i =0;i<arr.size();i++){
            cursum+=arr[i];
            
            if(cursum>maxsum){
                maxsum = cursum;
            }
            
            if(cursum<0){
                cursum = 0;
            }
            
        }
        return maxsum;
    }
};