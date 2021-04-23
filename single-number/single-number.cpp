class Solution {
public:
    int singleNumber(vector<int>& nums){
        
        if(nums.empty())
            return 0;
        
        int res {0};
        for(const int &i:nums)
            res ^= i;
        
        return res;
    }
};