class Solution {
public:
    
    string backspace_compare(string& s) 
{
    string res;
    int i = s.size() - 1;
    int backspace = 0;
    while (i >= 0) {
        if (s[i] == '#')
        {
            ++backspace;
        }
        else
        {
            if (backspace == 0)
                res += s[i];
            else
                --backspace;
        }
        --i;
    }
    return res;
}
bool backspaceCompare(string S, string T)
{
    string s = backspace_compare(S);
    string t = backspace_compare(T);
    
    return s==t;
}
};
