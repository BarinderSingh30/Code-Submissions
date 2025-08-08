

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        int max = -1;
        vector<int> result;
        
        for(int i =arr.size()-1;i>=0;i--){
            if(arr[i]>=max){
                max = arr[i];
                result.push_back(arr[i]);
            }
        }
        reverse(result.begin(),result.end());
        
        return result;
    }
};