class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        unordered_map<int,int> mpp;
        
        int maxi = 0;
        int sum = 0;
        int n = arr.size();
        
        for(int i =0;i<n;i++){
            sum+=arr[i];
            if(sum==0){
                maxi = max(maxi,i+1);
                
            }
            else{
                if(mpp.find(sum)!=mpp.end()){
                    int len = i - mpp[sum];
                    maxi = max(len,maxi);
                }
                else{
                    mpp[sum] = i;
                }
        
            }    
        }
        return maxi;
    }
};