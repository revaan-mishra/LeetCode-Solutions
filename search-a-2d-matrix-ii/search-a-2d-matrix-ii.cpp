class Solution
{
private:
    bool SearchRowbyRow(vector<int> &row, int key)
    {
        int low = 0;
        int high = row.size() - 1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (row[mid] == key)
                return true;

            else if (row[mid] < key)
                low = mid + 1;

            else
                high = mid - 1;
        }

        return false;
    }

public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        if (empty(matrix))
            return false;

        for (int row = 0; row < matrix.size(); row++)
        {
            if (SearchRowbyRow(matrix[row], target))
                return true;
        }
        return false;
    }
};