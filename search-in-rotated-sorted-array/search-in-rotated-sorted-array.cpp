class Solution {
public:
    int search(vector<int>& arr, int target)
    {
        int len = arr.size();
        int low = 0;
        int high = len - 1;
        int res = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == target) {
                return mid;
            }
            if (arr[low] <= arr[mid]) {
                if (arr[low] <= target && arr[mid] >= target)
                    high = mid - 1;
                else
                    low = mid + 1;
            }
            else if (arr[mid] <= target && arr[high] >= target) {
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        return res;
    }
};