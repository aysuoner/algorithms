struct	TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
};

class Solution {
public:
	bool	isSymmetric(TreeNode* root)
	{

		if(root==nullptr)
			return true;

		return isSymmetricTest(root->left,root->right);
	}

	bool	isSymmetricTest(TreeNode* p , TreeNode* q)
	{
		if(p == nullptr && q == nullptr)
			return true; 

		else if(p == nullptr || q == nullptr)
			return false; 

		else if(p->val!=q->val) 
			return false;

		return isSymmetricTest(p->left,q->right) && isSymmetricTest(p->right,q->left);
    }
};