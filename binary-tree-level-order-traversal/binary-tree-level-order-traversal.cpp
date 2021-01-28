/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        if(!root)
            return {};
        
        vector<vector<int>>results;
        queue<TreeNode*>q;
        
        q.push(root);
        
        while(q.size())
        {
            int len = q.size();
            int count = 0;
            vector<int>curr_val;
            
            while(count < len)
            {
                TreeNode* curr = q.front();
                curr_val.push_back(curr->val);
                
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
                count++;
               
                q.pop();
            }
           results.emplace_back(curr_val);  
        }
        return results;
    }
};