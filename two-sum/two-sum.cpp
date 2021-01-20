class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int,int> hash;
        vector<int> v;
   
        for(int i=0;i<nums.size();i++)
        {
            if (hash.find(target-nums[i]) != hash.end())
            {
                v.push_back(hash[target-nums[i]]);
                v.push_back(i);
                return v;
            }
            hash[nums[i]]=i;
        }
        return v;
    }
};
​
