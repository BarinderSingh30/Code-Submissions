class Solution {
  public:
    vector<int> intersection(vector<int> &a, vector<int> &b) {
        // code here
        int n = a.size();
        int m = b.size();
        
        vector<int> result;
        
        int i =0;
        int j =0;
        
        
        
        while(i<n && j<m){
            if(a[i] == b[j]){
                if(result.size()==0 || result.back()!=a[i]){
                    result.push_back(a[i]);
                }
                i++;
                j++;
            }
            
            else if(a[i]<b[j]){
                i++;
            }
            else{
                j++;
            }
            
            
            
            
            
            
        }
        return result;
        
        
    }
};