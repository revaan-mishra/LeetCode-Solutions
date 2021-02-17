class Solution
{
public:
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {
        if(!numCourses)
            return true;
        
        vector<vector<int>> AdjList(numCourses);
        vector<int> indeg(numCourses, 0);

        for (auto &edge : prerequisites)
        {
            AdjList[edge[1]].push_back(edge[0]);
            indeg[edge[0]]++;
        }
        
        queue<int> q;
        for (int i = 0; i < numCourses; i++)
        {
            if (indeg[i] == 0)
                q.push(i);
        }
        
        int count = 0;
        while (!q.empty())
        {
            auto nbr = q.front();
            q.pop();
            count++;
            for (auto v : AdjList[nbr])
            {
                if (--indeg[v] == 0)
                    q.push(v);
            }
        }
        return numCourses == count;
    }
};