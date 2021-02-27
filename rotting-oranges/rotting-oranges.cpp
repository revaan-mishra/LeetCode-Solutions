class Solution
{
public:
    auto orangesRotting(vector<vector<int>> &grid)
    {
        if (empty(grid))
            return 0;

        int m = grid.size();
        int n = grid[0].size();

        auto isValid = [m, n](int i, int j) {
            if (i >= 0 && i < m && j >= 0 && j < n)
                return true;
            return false;
        };

        int rotten = 2, fresh = 1;
        int freshCount {0};
        int rottenCount {0};

        queue<pair<int, int>> q;
        for (int row = 0; row < m; row++)
        {
            for (int col = 0; col < n; col++)
            {
                auto idx = grid[row][col];

                if (idx == rotten)
                    q.push({row, col});
                else if (idx == fresh)
                    freshCount++;
            }
        }
        
        if(freshCount == 0)
            return 0; 
        
        int time = 0;
        vector<pair<int, int>> dir = {{0, -1}, {-1, 0}, {0, 1}, {1, 0}};

        while (!q.empty())
        {
            int sz = q.size();

            while (sz--)
            {
                auto nbr = q.front();
                q.pop();

                for (auto d : dir)
                {
                    int nextRow = nbr.first + d.first;
                    int nextCol = nbr.second + d.second;
                    
                    if (isValid(nextRow, nextCol) and 
                        grid[nextRow][nextCol] == fresh)
                    {
                        grid[nextRow][nextCol] = rotten;
                        freshCount--;
                        q.push({nextRow, nextCol});
                    }
                }
            }
            
            time++;
        }

        return freshCount == 0 ? time - 1 : -1;
    }
};