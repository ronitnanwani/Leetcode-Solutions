class Solution {
public:
    int dp[20001][201];
    
    
    bool func(vector<int> &v,int sum,int idx,int checksum,int n){
        if(sum==checksum)
            return true;
        if(idx==n || sum<0)
            return false;
        if(dp[sum][idx]!=-1)
            return dp[sum][idx];
        return (dp[sum][idx]=(func(v,sum-v[idx],idx+1,checksum+v[idx],n) || func(v,sum,idx+1,checksum,n)));
    }
    
    
    bool canPartition(vector<int>& nums) {
        int sum=0;
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<nums.size();i++)
            sum+=nums[i];
        return func(nums,sum,0,0,nums.size());
    }
    
};