

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int>result;
        int n=arr.size();
        int maxrightleader=arr[n-1];
        result.push_back(maxrightleader);
        for(int i=n-2;i>=0;i--){
            if(arr[i]>=maxrightleader){
                result.push_back(arr[i]);
                maxrightleader=arr[i];
            }
        }
        reverse(result.begin(),result.end());
        return result;
        
    }
};