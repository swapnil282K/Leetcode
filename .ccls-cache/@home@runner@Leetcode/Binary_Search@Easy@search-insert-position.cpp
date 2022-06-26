class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0,j=nums.size();
        while(i<j)
        {
            int m=(i+j)/2;
            if(nums[m]<target)
            {
                i=m+1;
            }
            else
                j=m;
        }
        return i;
        
    }
};