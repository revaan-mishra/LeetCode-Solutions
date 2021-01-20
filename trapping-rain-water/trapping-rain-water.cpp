class Solution {
public:
    int trap(vector<int>& height)
    {
        if (height.size() < 3)
            return 0;
​
        
        int tw = 0, left = 0;
        int maxL =0, maxR = 0;
        int right = height.size() - 1;
​
        while (left < right)
        {
        if (height[left] <= height[right])
        {
          if (height[left] > maxL)
            maxL = height[left];
          
          else
            tw += (maxL - height[left]);
         
            left++;
        }
        else 
        {
            if(height[right] >= maxR)
                maxR = height[right];
            else
                tw += (maxR - height[right]);
            
            right--;
         }
        
    }
        return tw;
}
};
