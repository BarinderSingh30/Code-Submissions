class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
        
        unordered_map<int,int>mpp;
        long long sum = 0;
        
        int cnt = 0;
        mpp[0] = 1;
        
        for(int i =0;i<arr.size();i++){
            sum+=arr[i];
            
            long long rem = sum - k;
            if(mpp.find(rem)!=mpp.end()){
                cnt+=mpp[rem];
            }
            mpp[sum]++;
        }
        return cnt;
    }
};