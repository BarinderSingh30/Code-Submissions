class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        long long sum;
        
        sort(arr.begin(),arr.end());
        int n= arr.size();
        
        for(int i =0;i<n;i++){
            int j = i+1;
            int k = n-1;
            
            while(j<k){
                sum = arr[i]+arr[j]+arr[k];
                
                if(sum==target) return true;
                
                else if(sum<target) j++;
                else if(sum>target) k--;
            }
        }
        
        return false;
    }
};