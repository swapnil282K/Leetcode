class Solution {
public:
    long long int binarysearch(int n)
    {
        long long int s=0,e=n;
        long long int mid=s+(e-s)/2;
        long long int ans=-1;
        while(s<=e)
        {
            if(mid*mid==n)
            {
                return mid;
            }
            else if(mid*mid<n)
            {
                ans=mid;
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
            mid=s+(e-s)/2;
            
        }
        return ans;
    }
    int mySqrt(int x) {
        return binarysearch(x);
        
    }
};