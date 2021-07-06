class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int n =nums.size();
        int i = 1, count = 1;
        
        int res = nums[0];
        while ( i < n )
        {
            while ( i < n and nums[i] == nums[i-1] )
            {
                i = i + 1;
                count = count + 1;
            }
            if ( count > (n/2) )
                res = nums[i-1];
            
            count = 1;
        i = i + 1;
        }
        return res;
    }
};