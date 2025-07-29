class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        vector<int> ans;
        
        int temp = arr[0];
        int n = arr.size();
        
        ans.push_back(temp);
        
        for(int i =1;i<n;i++){
            if ( arr[i] == temp){
                continue;
            }
            else{
                ans.push_back(arr[i]);
                temp = arr[i];
            }
        }
        return ans;
    }
};