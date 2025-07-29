// User function Template for C++


class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        // code here
        unordered_set<int> seen;
        
        vector<int> result;
        
        seen.insert(arr[0]);
        result.push_back(arr[0]);
        
        for(int i =1;i<arr.size();i++){
            
            if(seen.find(arr[i]) == seen.end()){
                seen.insert(arr[i]);
                result.push_back(arr[i]);
            }
            
        }
        
        return result;
        
        
    }
};