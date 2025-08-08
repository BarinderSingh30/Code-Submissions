// User function template for C++
class Solution {
  public:
    vector<int> findSubarray(vector<int>& a) {
        // code here
    int n =a.size();
    vector<int>ans, temp;
    long long max_sum=0, curr_sum=0;
    
    for(int i=0; i<n; i++){
        if(a[i]<0){
            temp.clear();
            curr_sum=0;
        }
        else{
            temp.push_back(a[i]);
            curr_sum+=a[i];
            
            if(curr_sum>max_sum){
                max_sum=curr_sum;
                ans=temp;
            }
            else if(curr_sum==max_sum){
                if(temp.size()>ans.size()){
                   ans=temp;
                }
            }
        }
    }
    
    if(ans.empty()) ans.push_back(-1);
    return ans;
    }
};