class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int currmax=a[0];
        int maxsofar=a[0];
        for(int i=1;i<a.size();i++)
        {
            currmax=max(a[i],currmax+a[i]);
            maxsofar=max(maxsofar,currmax);
        }
        return maxsofar;
    }
};