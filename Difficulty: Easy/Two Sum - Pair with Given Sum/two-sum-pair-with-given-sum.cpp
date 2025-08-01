class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        unordered_map<int,int> mpp;
        
        for(int i =0;i<arr.size();i++){
            
            int x = target - arr[i];
            
            if(mpp.find(x)!=mpp.end()){
                return true;
            }
            
            mpp[arr[i]] = i;
        }
        
        return false;
    }
};