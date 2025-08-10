class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        unordered_map<int,int> mpp;
        int xr = 0;
        mpp[xr]++;
        int n = arr.size();
        int cnt=0;
        
        for(int i =0;i<n;i++){
            xr = xr^arr[i];
            
            int x = xr^k;
            
            if(mpp.find(x)!=mpp.end()){
                cnt+=mpp[x];
            }
            
            mpp[xr]++;
            
        }
        return cnt;
    }
};