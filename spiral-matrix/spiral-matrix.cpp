class Solution
{
public:
  vector<int>spiralOrder(vector<vector<int>>&matrix)
  {
    if (matrix.empty())
      return {};

    const int m = matrix.size(), n = matrix[0].size();

    int top =  0; 
    int left = 0;  
    int bottom = m - 1;
    int right = n - 1;

    vector < int >res;

    while (top <= bottom && left <= right)
      {
        
	for (int row = left; row <= right; row++)
	  res.emplace_back (matrix[top][row]);
	top++;
        
	for (int col = top; col <= bottom; col++)
	  res.emplace_back (matrix[col][right]);
	right--;
        
	for (int row = right; row >= left && top <= bottom; row--)
	  res.emplace_back (matrix[bottom][row]);
	bottom--;

	for (int col = bottom; col >= top && left <= right; col--)
	  res.emplace_back (matrix[col][left]);
	left++;
    
      }
    return res;
  }
};
