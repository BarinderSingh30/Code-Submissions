class Solution {
  public:
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        // code here
        int n = arr1.size();
        int m = arr2.size();
        
        int i = 0;
        int j = 0;
        
        vector<int> result;
        
        while (i<n && j<m){
            if(arr1[i]<arr2[j]){
                i++;
            }
            else if(arr2[j]<arr1[i]){
                j++;
            }
            
            else if(arr1[i] == arr2[j]){
                if(result.size() == 0 || result.back()!=arr1[i]){
                    result.push_back(arr1[i]);
                }
                i++;
                j++;
            }
        }
        
        return result;
    }
};