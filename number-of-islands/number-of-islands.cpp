class Solution {
private:
    void numIslandsHelper(vector<vector<char>> &grid, int i, int j)
    {
        int n = grid.size();
        int m = grid[0].size();
        
        if(i<0 or i == n or j<0 or j == m)   // Boundary condition
            return;
        
        if(grid[i][j] == '0')  
            return;
        
        grid[i][j] ='0';
        
        numIslandsHelper(grid,i-1,j);   // Top
        numIslandsHelper(grid,i,j+1);   // Right
        numIslandsHelper(grid,i+1,j);   // Bottom
        numIslandsHelper(grid,i,j-1);   // Left        
    }
    
public:    
    int numIslands(vector<vector<char>>& grid)
    {
        int n = grid.size();
        int m = n ? grid[0].size() : 0;
        int count {0};
        
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                if(grid[i][j]=='1')
                {
                    count++;
                    numIslandsHelper(grid,i,j);
                }
                    
            }
        }
        return count;
    }
};