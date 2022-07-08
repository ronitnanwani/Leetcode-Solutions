class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        vector<int>::iterator it=lower_bound(nums.begin(),nums.end(),target);
        int idx;
        idx=it-nums.begin();
        return idx;
        // for(auto x:nums){
        //     if(x==(*it))
        //         return idx;
        //     else
        //         idx++;
        // }
        
    }
};