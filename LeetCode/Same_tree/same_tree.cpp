struct	TreeNode
{
	int			val;
	TreeNode	*left;
	TreeNode	*right;
};

bool	isSameTree(TreeNode* p, TreeNode* q)
{
	if  ((p && q == nullptr) || (p == nullptr && q))
		return false;
	if (p == nullptr && q == nullptr)
		return true;
	if (p->val == q->val)
		return isSameTree(p->right, q->right) && isSameTree(p->left, q->left);
	return false;
}