class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {

        int n = nums.size();
        vector<int> right(n);
        vector<int> result(n);
        right[n - 1] = nums[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            right[i] = right[i + 1] * nums[i];
        }

        int left = 1;
        for (int i = 0; i < n - 1; i++) {
            result[i] = left * right[i + 1];
            left *= nums[i];
        }
        result[n - 1] = left;

        return result;
    }
};