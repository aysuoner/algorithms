struct	TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
};

class	Solution
{
public:
    int	countNodes(TreeNode* root)
	{
		if (!root)
			return 0;
		int left;
		int right;
		left = countNodes(root->left);
		right = countNodes(root->right);
		return left + right + 1;
	}
};