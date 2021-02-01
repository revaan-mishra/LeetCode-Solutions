class Solution
{
	public:
		void sortColors(vector<int> &nums)
		{
			int index {0};
			int start {0};
			int end = nums.size() - 1;

			while (index <= end && start < end)
			{
				if (nums.at(index) == 0)
				{
					nums.at(index) = nums.at(start);
					nums.at(start) = 0;
					start++;
					index++;
				}
				else if (nums.at(index) == 2)
				{
					nums.at(index) = nums.at(end);
					nums.at(end) = 2;
					end--;
				}
				else
					index++;
			}
		}
};