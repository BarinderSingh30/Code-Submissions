//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
    void fun(int i,vector<int> &ar,int n){
        if(i>=n/2) return;
        
        swap(ar[i],ar[n-i-1]);
        fun(i+1,ar,n);
    }
    
    
    
    void reverseArray(vector<int> &arr) {
        // code here
        int size = arr.size();
        int i = 0;
        fun(0,arr,size);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        ob.reverseArray(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends