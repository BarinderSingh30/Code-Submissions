class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int maxi = arr[0];
        
        for(auto it : arr){
            if (it>maxi){
                maxi = it;
            }
        }
        
        return maxi;
    }
};
