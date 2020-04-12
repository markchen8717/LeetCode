/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 /*
  We use DFS to obtain the tree depth of every sub-tree. Using a global variable(technically not, since its a class member),
  we keep track of the longest possbile path starting from the deepest leaf node of the left sub-tree, to the deepest leaf
  node of the right subtree. Notice that this can be done while finding the tree depth of the original tree. Hence, we only 
  need to traverse each node once.
  Time complexity :O(N)
  Space complexity : O(N)
 */
class Solution {
private:
    int best = 0;
    
    int get_tree_depth(TreeNode *root)
    {
        //printf("called agian\n");
        if(root == NULL) return 0;
        int left_sub_tree = get_tree_depth(root->left);
        int right_sub_tree = get_tree_depth(root->right);
        best = (best > left_sub_tree + right_sub_tree)? best : left_sub_tree + right_sub_tree;
        return (left_sub_tree > right_sub_tree)? left_sub_tree + 1 : right_sub_tree + 1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        best = 0;
        get_tree_depth(root);
        return best;
    }
};
