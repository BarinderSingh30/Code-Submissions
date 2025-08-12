class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i = 0;
        int j = 0;

        if(nums2.size()==0){
            return;
        }

        while(i<m){
            if(nums1[i]>nums2[j]){
                swap(nums1[i],nums2[j]);
                sort(nums2.begin(),nums2.end());
            }
            else if(nums1[i]<=nums2[j]){
                i++;
            }
        }

        i = m;
        j = 0;

        while(i<m+n){
            nums1[i] = nums2[j];
            i++;
            j++;
        }


    }
};