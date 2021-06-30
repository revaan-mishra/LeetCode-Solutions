class Solution {
public:
    int numDecodings(string s)
    {
        vector<int> dp(s.length());

        if (s[0] != '0')
            dp[0] = 1;
        else if (s[0] == '0')
            dp[0] = 0;

        for (size_t i = 1; i < dp.size(); i++) {
            if (s.at(i - 1) == '0' && s.at(i) == '0')
                dp[i] = 0;

            else if (s.at(i - 1) == '0' && s.at(i) != '0')
                dp[i] = dp[i - 1];

            else if (s.at(i - 1) != '0' && s.at(i) == '0') {
                if (s.at(i - 1) == '1' || s.at(i - 1) == '2')
                    dp[i] = (i >= 2 ? dp[i - 2] : 1);
                else
                    dp[i] = 0;
            }
            else {
                if (stoi(s.substr(i - 1, 2)) <= 26) {
                    dp[i] = dp[i - 1] + (i >= 2 ? dp[i - 2] : 1);
                }
                else
                    dp[i] = dp[i - 1];
            }
        }
        return dp[s.length() - 1];
    }
};