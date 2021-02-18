class Solution
{
	public:
		vector<vector<int>> employee;

	int dfs(int curr, vector<int> &informTime)
	{
		int time = 0;
		for (int nbr: employee[curr])
		{
			time = max(time, dfs(nbr, informTime));
		}

		return time + informTime[curr];
	}

	int numOfMinutes(int n, int headID, vector<int> &manager, vector<int> &informTime)
	{
		employee.resize(n);
		for (int i = 0; i<n; i++)
		{
			if (manager[i] == -1)
				continue;
			employee[manager[i]].push_back(i);
		}

		return dfs(headID, informTime);
	}
};