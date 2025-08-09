class Solution {
public:
    vector<int> generaterow(int n){
        vector<int> result;
        
        long long ans = 1;
        result.push_back(ans);
        
        for(int i =1;i<n;i++){
            ans = ans*(n-i);
            ans = ans/i;
            result.push_back(ans);
        }
        
        return result;
    }

    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> ans;


        for(int i =1;i<=numRows;i++){
            ans.push_back(generaterow(i));
        }
        return ans;
    }
};