class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        sort(arr.begin(),arr.end());
        
        vector<int> ans;
        int rep = 0,miss = 0;
        for(int i =0;i<n-1;i++){
            if(arr[i+1] == arr[i]+1){
                continue;
            }
            else if(arr[i+1]==arr[i]){
                rep = arr[i];
            }
            else{
                miss = arr[i]+1;
            }
            
        }
        if(arr[0]!=1){
            miss = 1;
        }
        if(arr[n-1]!=n){
            miss = n;
        }
        
        ans.push_back(rep);
        ans.push_back(miss);
        return ans;
    }
};