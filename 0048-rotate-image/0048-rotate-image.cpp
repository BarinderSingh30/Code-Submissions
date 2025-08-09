class Solution {
public:
    void rotate(vector<vector<int>>& a) {
        int n = a.size();
        vector<vector<int>> b(n,vector<int>(n,0));
        

        for(int i =0;i<n;i++){
            for(int j=0;j<n;j++){
                b[i][j] = a[i][j];
            }
        }

        for(int i =0;i<n;i++){
            for(int j=0;j<n;j++){
                a[i][j] = b[n-1-j][i];
            }
        }


    }
};