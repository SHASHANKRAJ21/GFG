// User function Template for C++

class Solution {
  public:
    int n;
    vector<vector<int>>result;
    void solve(int idx,vector<int>&nums){
        if(idx==n){
            result.push_back(nums);
            return;

        }
        unordered_set<int>st;
        for(int i=idx;i<n;i++){
            if(st.find(nums[i])!=st.end()){
                continue;
            }
            st.insert(nums[i]);
            swap(nums[i],nums[idx]); // do
            solve(idx+1,nums);       //then explore which basically meanse to call
            swap(nums[i],nums[idx]); //then revert
        }
    }
    vector<vector<int>> uniquePerms(vector<int>& nums) {
        n=nums.size();
        solve(0,nums);
        sort(result.begin(),result.end());
        return result;
    }
};