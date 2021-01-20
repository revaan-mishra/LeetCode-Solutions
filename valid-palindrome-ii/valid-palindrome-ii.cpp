class Solution { 
    
    bool SubPalindrome(const string& s, int left, int right)
    {
        while(left < right){
            if(s[left] != s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
public:
​
    
    bool validPalindrome(string s) {
        if(s.size() <= 2) return true;
        
        int left = 0;
        int right = s.length()-1;
        
        while(left < right){
            if(s[left] != s[right]){
              return SubPalindrome(s, left+1, right) || SubPalindrome(s, left, right-1);
            }
            left++; right--;
        }
        return true;
    }
};
