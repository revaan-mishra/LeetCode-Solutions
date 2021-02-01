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
    int ans = INT_MIN;

  int height(TreeNode * root) {
    if (!root)
      return 0;

    int leftheight = height(root -> left);
    int rightheight = height(root -> right);

    ans = max(ans, (1 + leftheight + rightheight));

    return 1 + max(leftheight, rightheight);
  }

  int diameterOfBinaryTree(TreeNode * root) {

    if (!root)
      return 0;

    height(root);
    return ans-1; // vertices = node - 1;
  }
};