class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n = arr.size();
        int m = n+1;
        
        long long osum = 1LL*m*(m+1)/2;
        
        long long asum = 0;
        
        for(auto num: arr){
            asum+=num;
        }
        
        return osum - asum;
        
 
        
        
        
    }
};