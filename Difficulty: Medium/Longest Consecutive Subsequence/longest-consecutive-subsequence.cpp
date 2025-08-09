class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        unordered_set<int> st;
        int n = arr.size();
        int longest = 1;
        
        
        for(int i =0;i<n;i++){
            st.insert(arr[i]);
        }
        
        
        for(auto it: st){
            if(st.find(it-1)==st.end()){
                int x = it;
                int cnt = 1;
                
                while(st.find(x+1)!=st.end()){
                    x+=1;
                    cnt+=1;
                }
                longest = max(longest,cnt);
                
                
            }
        }
        return longest;
    }
};