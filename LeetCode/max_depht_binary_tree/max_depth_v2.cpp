#include <iostream>

using namespace std;
	
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};

int	maxDepth(TreeNode* root)
{
	if (!root)
		return 0;
	int left;
	int right;
	left = maxDepth(root->left);
	right = maxDepth(root->right);
	return max(left,right) + 1;
}