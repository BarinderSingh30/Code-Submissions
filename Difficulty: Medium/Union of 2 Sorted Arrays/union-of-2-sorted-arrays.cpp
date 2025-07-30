class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        unordered_set<int> seen;
        vector<int> result;
        
        
        int n = a.size();
        int m = b.size();
        
        int i = 0;
        int j = 0;
        
        while (i<n && j<m){
            if(a[i]<b[j]){
                if(seen.find(a[i])==seen.end()){
                    seen.insert(a[i]);
                    result.push_back(a[i]);
                }
                i++;
            }
            
            else if (a[i]>b[j]){
                if(seen.find(b[j])==seen.end()){
                    seen.insert(b[j]);
                    result.push_back(b[j]);
                }
                j++;
            }
            
            else if(a[i] == b[j]){
                if(seen.find(a[i])==seen.end()){
                    seen.insert(a[i]);
                    result.push_back(a[i]);
                }
                i++;
                j++;
            }
        }
        
        while(i<n){
            if(seen.find(a[i])==seen.end()){
                    seen.insert(a[i]);
                    result.push_back(a[i]);
                }
                i++;
        }
        while(j<m){
            if(seen.find(b[j])==seen.end()){
                    seen.insert(b[j]);
                    result.push_back(b[j]);
                }
                j++;
        }
        
        return result;
            
        }
        
    
};