class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int max0 = 0;
        int max1 = 0;
        
        int cnt0 = 0;
        int cnt1 = 0;
        
        
        for(int i =0;i<arr.size();i++){
            if(arr[i] == 0){
                cnt1 = 0;
                
                cnt0++;
                if(cnt0>max0){
                    max0=cnt0;
                }
            }
            
            else{
                cnt0 = 0;

                cnt1++;
                if(cnt1>max1){
                    max1 = cnt1;
                }
                
            }
            
        }
        
        return max(max0,max1);
    }
};