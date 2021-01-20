class Solution {
public:
    bool isPalindrome(string s) {
  
  string strip;
  for(char i : s){
  if(isalnum(i)){
   strip += tolower(i);
            }
        }
  int i,j;
  i=0, j=strip.length()-1;
  while (i < j)   
  {
      if(strip[i]!=strip[j])
      {
       return false;
      }
      i++;
      j--;
      
  }
      return true;
        
    }
};
