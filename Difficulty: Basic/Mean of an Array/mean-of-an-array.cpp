//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findMean(vector<int>& arr) {
        // code here
        int mean=0;
        
        for(int i =0;i<arr.size();i++){
            mean+=arr[i];
        }
        
        return floor(mean/arr.size());
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> arr;
        while (ss >> num)
            arr.push_back(num);

        Solution ob;
        cout << ob.findMean(arr) << endl << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends