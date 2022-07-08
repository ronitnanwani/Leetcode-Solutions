class Solution {
public:
    int mySqrt(int x) {
        long long int lo=1,hi=x;
        while(hi-lo>1){
            long long int mid=(lo+hi)/2;
            if(mid*mid<=x)
                lo=mid;
            else
                hi=mid-1;
            
        }
        if(hi*hi<=x)
            return hi;
        else
            return lo;
    }
};