//method 1
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sum={nums[0]};
        for(int i=1;i<nums.size();i++)
        {
            sum.push_back(sum.back()+nums[i]);
        }
        return sum;
    }
};

//Method2
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1;i<nums.size();i++)
        {
            nums[i]+=nums[i-1];
        }
        return nums;
    }
};