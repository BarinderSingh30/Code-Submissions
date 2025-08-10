class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>mpp;
        vector<int>ans;

        for(auto num:nums){
            mpp[num]++;
        }

        int n = nums.size();
        int me = n/3;

        for(auto it:mpp){
            if(it.second>me){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};