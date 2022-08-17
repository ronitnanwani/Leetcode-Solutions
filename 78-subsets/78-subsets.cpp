class Solution {
public:
    vector <vector<int>>ans;
    
    void func(vector<int> v,vector<int>& nums,int idx,int n){
        if(idx==n){
            ans.push_back(v);
            return;
        }
        func(v,nums,idx+1,n);
        v.push_back(nums[idx]);
        func(v,nums,idx+1,n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int> v;
        func(v,nums,0,n);
        return ans;
    }
};