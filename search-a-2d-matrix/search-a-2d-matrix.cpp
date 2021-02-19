class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {      
        if(empty(matrix))
            return false;
        
        int i = 0;
        int j = matrix[0].size()-1;      
        
        while(j>=0 and i<matrix.size())
        {
        int res = matrix[i][j];
        if(res == target)
            return true;
        else if(res < target)
            i++;
        else
            j--;
        }
        return false;
    }
};