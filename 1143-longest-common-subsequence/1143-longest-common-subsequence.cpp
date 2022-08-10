class Solution {
public:
    int dp[1005][1005];
    int func(string &s1,string &s2,int idx1,int idx2){
        if(idx1==-1 || idx2==-1)
            return 0;
        if(dp[idx1][idx2]!=-1)
            return dp[idx1][idx2];
        
            return dp[idx1][idx2]=max(func(s1,s2,idx1-1,idx2-1)+(s1[idx1]==s2[idx2]),max(func(s1,s2,idx1-1,idx2),func(s1,s2,idx1,idx2-1)));
        
    }
    int longestCommonSubsequence(string text1, string text2) {
        memset(dp,-1,sizeof(dp));
        int l1=text1.size()-1;
        int l2=text2.size()-1;
        return(func(text1,text2,l1,l2));
    }
};