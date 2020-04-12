/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 
 /*
 Essentially, we want to caculate the tree depth of each sub-tree, and return the maximum tree depth. This implementation 
 can be futhur optimized.
 Time complexity: O(N^2), we are currently doing extra work with our post traversal + DFS for getting the tree depth
 Memory complexity: O(N^2), likewise, the call stack for our recursion is using extra memory for our operations 
 */

int best = 0;

int get_tree_depth(struct TreeNode* root, int depth){
    if (root == NULL)
        return depth;
    int a = get_tree_depth(root->left,depth+1);
    int b = get_tree_depth(root->right,depth+1);
    return (a >b)? a:b; 
}

void post_traversal(struct TreeNode* root)
{
    if(root == NULL)
        return;
    post_traversal(root->left);
    post_traversal(root->right);
    int a = get_tree_depth(root->left,0); 
    int b = get_tree_depth(root->right,0);
    int c = a + b;
    printf("%d %d %d %d\n",a,b,c,best);
    best = (best>c)? best:c;
}

int diameterOfBinaryTree(struct TreeNode* root){
    best = 0;
    printf("we in\n");
    if(root == NULL)
        return 0;
    post_traversal(root);
    return best;
    
}


