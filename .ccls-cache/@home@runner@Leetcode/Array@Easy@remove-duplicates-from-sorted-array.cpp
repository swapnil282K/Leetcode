class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<2)
        {
            return nums.size();
        }
        int l=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[l]!=nums[i])
            {
                l++;
                nums[l]=nums[i];
            }
        }
        return l+1;
    }
};