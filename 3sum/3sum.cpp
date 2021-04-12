class Solution
{

public:
  vector<vector<int>> threeSum(vector<int>& nums)
  {

    if (nums.empty()) {

      return {};
    }
    size_t n_size = nums.size();  
    sort(nums.begin(), nums.end());

    vector<vector<int>> res;

    for (int i = 0; i < n_size; i++)

    {
        if (nums[i] > 0)
            break;
        if (i > 0 and nums[i] == nums[i-1]) continue;

      int start = i + 1;

      int end = n_size - 1;

      while (start < end)

      {
        int sum = nums[i] + nums[start] + nums[end];

        if (sum > 0)
        {
          end--;
        }
          
        else if (sum < 0)
        {
          start++;
        }
          
        else
        {
          res.push_back({ nums[i], nums[start], nums[end] });

          while (start < end && nums[start] == nums[start + 1])
              start++;

          while (start < end && nums[end] == nums[end - 1])
              end--;
            
            start++;
            end--;
        }
      }
    }

    return res;
  }
};
