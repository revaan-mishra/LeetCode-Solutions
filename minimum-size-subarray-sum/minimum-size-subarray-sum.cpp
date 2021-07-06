class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums)
    {

        int start, sum;
        start = sum = 0;
        int len = INT_MAX;

        for (int end = 0; end < nums.size(); end++) {
            sum += nums[end];

            while (sum >= target) {
                len = min(len, end - start + 1);
                sum -= nums[start];
                start++;
            }
        }
        return len == INT_MAX ? 0 : len;
    }
};