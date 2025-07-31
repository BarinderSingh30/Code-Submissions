class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        long long maxsum = INT_MIN;
        long long sum =0;
        
        for(int i =0;i<arr.size();i++){
            sum +=arr[i];
            maxsum = max(sum,maxsum);
            if(sum<0){
                sum = 0;
            }
            
        }
        return maxsum;
    }
};