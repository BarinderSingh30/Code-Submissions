class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest = 0;
        int secondlargest = 0;
        
        for(auto num : arr){
            if (num > largest){
                secondlargest = largest;
                largest = num;
            }
            else if (num > secondlargest && num != largest){
                secondlargest = num;
            }
        }
        
        if (secondlargest == 0){
            return -1;
        }
        return secondlargest;
    }
};