class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        // lower_bound and upper_bound returns iterator so to convert it into index we subtract from the beginning iterator
        if(binary_search(nums.begin(),nums.end(),target))
        {
            int lb = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
            int ub = upper_bound(nums.begin(),nums.end(),target)-nums.begin();
            
            return{lb,ub-1};
        }
        else return {-1,-1};
    }
};