class Solution
{
public:
    string minRemoveToMakeValid(string s)
    {
        stack<int> stk;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
                stk.push(i);
            else if (s[i] == ')' && !stk.empty()){
                    stk.pop();}
            else if(s[i] == ')'){
                    s.erase(i,1);
                    i--;
                    }
        }
        while (!stk.empty())
        {
            s.erase(stk.top(),1);
            stk.pop();
        }
        return s;
    }
};
​
