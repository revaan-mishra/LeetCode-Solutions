class Solution
{
    public:
    
    vector<int> shortestToChar(string s, char c)
    {
        vector<int> index;
        vector<int> res(s.length());

        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == c)
                index.push_back(i);
        }

        int left, right;
        left = right = 0;

        for (int i = 0; i < s.length(); ++i)
        {
            if (i > index[right] and right < index.size() - 1)
            {
                left = right;
                ++right;
            }

            res[i] = min(abs(index[right] - i),
                         abs(index[left] - i));
            
        }
        return res;
    }
};