class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        unordered_map<int,int> mpp;
        
        for(int i =0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        
        int me = arr.size()/2;
        
        for(auto it:mpp){
            if (it.second>me){
                return it.first;
            }
        }
        
        return -1;
    }
};