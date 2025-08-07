class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
    vector<int> result;
    result.push_back(arr[0]);
    
    for(int num: arr){
        if(result.back()!=num){
            result.push_back(num);
        }    
    }
    
    return result;
    
    }
};