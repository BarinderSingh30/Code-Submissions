class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        
        sort(arr.begin(),arr.end());
        
        int left = 0;
        int right = arr.size()-1;
        long long sum = 0;
        
        while(left<right){
            sum = arr[left] + arr[right];
            
            if(sum==target){
                return true;
            }
            else if (sum<target){
                left++;
            }
            else{
                right--;
            }
            
        }
        return false;
    }
};