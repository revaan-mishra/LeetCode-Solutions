class Solution {
public:
    bool isPalindrome(int x) {
  
  auto s = to_string(x);   
  int i,j;
  i=0, j=s.length()-1;
  while (i < j)   
  {
      if(s[i]!=s[j])
      {
       return false;
      }
      i++;
      j--;
      
  }
      return true;
        
    }
};
​
