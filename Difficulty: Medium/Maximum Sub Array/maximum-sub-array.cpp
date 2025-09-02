// User function template for C++
class Solution {
  public:
    vector<int> findSubarray(vector<int>& arr) {
        // code here
        vector<int> ans;
        
        long long sum = 0;
        long long maxsum = LONG_MIN;
        int start = -1;
        
        int ansstart = -1, ansend = -1;
        
        for(int i =0;i<arr.size();i++){
            if(sum == 0){
                start =i;
            }
            
            sum+=arr[i];
            
            if(sum>maxsum && arr[i]>=0){
                maxsum = sum;
                ansstart = start;
                ansend = i;
            }
            
            if(sum==maxsum && arr[i]==0){
                maxsum = sum;
                ansstart = start;
                ansend = i;
            }

            
            
            if(arr[i]<0){
                sum = 0;
            }
        }
        
        if(ansstart == -1){
            return {-1};
        }
        for(int i = ansstart;i<=ansend;i++){
            ans.push_back(arr[i]);
        }
        
        return ans;
    }
};