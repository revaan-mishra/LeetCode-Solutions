class Solution {
public:
    int lengthOfLongestSubstring(string s) {
​
        if(s.size()==0)
            return 0;
        
      vector<int> hash(256,0);
        hash[s[0]]++;
        int i,j;
        i=j=0;
        int ans=1;
        
        
        while(j!=s.size()-1)
        {
            if(hash[s[j+1]]==0)
            {
                j++;
                hash[s[j]]++;
                
                ans= max(ans,j-i+1);
            }
            else
            {
                hash[s[i]]--;
                i++;
            
            }
    }
        return ans;
}
};
