class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        // Code here
        vector<int> ans;
        
        int n = arr.size();
        int me = n/3;
        
        int ele1 = INT_MIN;
        int cnt1 = 0;
        
        int ele2 = INT_MIN;
        int cnt2 = 0;
        
        for(int i =0;i<n;i++){
            if(cnt1==0 && arr[i]!=ele2){
                ele1 = arr[i];
                cnt1++;
            }
            else if(cnt2==0 && arr[i]!=ele1){
                ele2 = arr[i];
                cnt2++;
            }
            else if(ele1 == arr[i]) cnt1++;
            else if(ele2 == arr[i]) cnt2++;
            else{
                cnt1--,cnt2--;
            }
        }
        
        cnt1 = 0,cnt2 = 0;
        
        for(int i =0;i<n;i++){
            if(arr[i]==ele1) cnt1++;
            if(arr[i]==ele2) cnt2++;
        }
        if(cnt1>me) ans.push_back(ele1);
        if(cnt2>me) ans.push_back(ele2);
        
        sort(ans.begin(),ans.end());
        
        return ans;
    }
};