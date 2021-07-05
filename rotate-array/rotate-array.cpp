class Solution {
public:
    void rotate(vector<int>& nums, int k)
    {
        k = k % nums.size();
        
/*             b       e-k       e            
Example Input: 1  2  3  4  5  6  7 , k = 3      */
        
        reverse(nums.begin(), nums.end() - k);
        // o/p: 4 3 2 1 5 6 7
/*              b     k     e            */
        
        
        reverse(nums.end() - k, nums.end());
        // o/p: 4  3  2  1  7  6  5 
/*              b     e-k          e            */
        
        reverse(nums.begin(), nums.end());
        // o/p: 5  6  7  1  2  3  4
//              b                 e
        
    }
};