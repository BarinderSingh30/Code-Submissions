class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int maxlen = 0;
        long long sum = 0;
        unordered_map<long long,int> mpp;
        
        for(int i =0;i<arr.size();i++){
            sum+=arr[i];
            if(sum==k){
                maxlen = max(maxlen,i+1);
            }
            
            long long rem = sum - k;
            if(mpp.find(rem)!=mpp.end()){
                maxlen = max(maxlen,i-mpp[rem]);
            }
            
            if(mpp.find(sum)==mpp.end()){
                mpp[sum] = i;
            }
        }
        return maxlen;
    }
};