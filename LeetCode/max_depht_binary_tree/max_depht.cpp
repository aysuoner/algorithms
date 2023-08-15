#include <vector>
#include <iostream>

using namespace std;

struct TreeNode
{
      int val;
      TreeNode *left;
      TreeNode *right;
};

int maxDepth(TreeNode* root)
{
	if(!root)
		return 0;
	int maxLeft = maxDepth(root->left);
	int maxRight = maxDepth(root->right);
	return max(maxLeft, maxRight)+1;
}

//TC - O(num of nodes) as we are traversing all the nodes of the tree
//SC - O(height of the tree) for the recursive stack