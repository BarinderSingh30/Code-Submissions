//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution{   
public:
    string isVowel(char c){
        // code here 
        vector<char> vowel={'a','e','i','o','u','A','E','I','O','U'};
        
        for(int i=0;i<vowel.size();i++){
            if (c==vowel[i])
                return "YES";
        }
        
        return "NO";
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        char c;
        cin >> c;
        Solution ob;
        cout << ob.isVowel(c) << endl;
    
cout << "~" << "\n";
}
    return 0; 
} 
// } Driver Code Ends