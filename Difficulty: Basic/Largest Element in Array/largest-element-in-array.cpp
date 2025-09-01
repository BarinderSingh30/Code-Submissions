class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int maxi = -1;
        
        for(auto num:arr){
            if(num>maxi){
                maxi = num;
            }
        }
        return maxi;
    }
};
