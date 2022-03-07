// Time Complexity: O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> v;
        for(int i=0;i<nums.size();i++)
        {
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        int i=0;
        int j=v.size()-1;
        int a=0,b=0;
        while(i<j)
        {
            if(v[i].first+v[j].first==target)
            {
                a=v[i].second;
                b=v[j].second;
                break;
            }
            else if(v[i].first+v[j].first>target)
            {
                j--;
            }
            else
            {
                i++;
            }
       }
        return {a,b};
    }
};

// Time Complexity: O(n^2)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target && i!=j)
            {
                res.push_back(i);
                res.push_back(j);
            }
            }
        }
        return res;
        
    }
};