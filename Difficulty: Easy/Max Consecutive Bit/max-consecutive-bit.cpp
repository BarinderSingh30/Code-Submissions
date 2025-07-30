class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int max1 = 0;
        int cnt1 = 0;
        
        int max0 = 0;
        int cnt0 = 0;
        
        for(int i =0;i<arr.size();i++){
            if (arr[i]==0){
                cnt1 = 0;
            }
            else if (arr[i]==1){
                cnt1++;
                if(max1<cnt1){
                    max1 = cnt1;
                }
            }
        }
        
        for(int i =0;i<arr.size();i++){
            if (arr[i]==1){
                cnt0 = 0;
            }
            else if (arr[i]==0){
                cnt0++;
                if(max0<cnt0){
                    max0 = cnt0;
                }
            }
        }
        
        if (max1>=max0){
            return max1;
        }
        else{
            return max0;
        }
        
    }
};