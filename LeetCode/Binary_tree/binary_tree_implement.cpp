#include <vector>
#include <iostream>

using namespace std;

struct	Node
{
		int data;
		Node *left;
		Node *right;
};

Node	*insert(Node *root, int k)
{
	if (root == NULL)
	{
		Node *newnode = new Node();
		newnode->data = k;
		newnode->left = NULL;
		newnode->right = NULL;
		return newnode;
	}

	if (k < root->data)
	{
		root->left = insert(root->left, k);
	}
	else if (k > root->data)
	{
		root->right = insert(root->right, k);
	}
	return root;
}

void	inorder(Node *root)
{
	if (root == NULL)
		return;
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

int size(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftSize = size(root->left);
    int rightSize = size(root->right);
    
    return 1 + leftSize + rightSize;
}

int max_val(Node *root)
{
	if (root->right == NULL)
		return root->data;
	else
		return max_val(root->right);
}

int	min_val(Node *root)
{
	if(root->left == NULL)
		return(root->data);
	else
		return min_val(root->left);
}

int search(Node *root, int value, int &steps)
{
    if (root == NULL)
    {
        return -1;
    }
	steps++;
    if (value == root->data)
    {
        return root->data;
    }
    else if (value < root->data)
    {
        return search(root->left, value, steps);
    }
    else
    {
        return search(root->right, value, steps);
    }
}

int main()
{
	vector<int> v = {7,4,3,2,1};
	Node *root = NULL;
	for (int i = 0; i < v.size(); i++)
	{
		root = insert(root, v[i]);
	}

	cout << "SORTED: ";
	inorder(root);
	cout << std::endl;

	int min = min_val(root);
	cout << "MIN " << min;
	int max = max_val(root);
	cout << " MAX: " << max << std::endl;

	int steps = 0;
	int res = search(root, 1, steps);
	cout << "find:" << res  << " steps: " << steps << endl; 

	cout << "size: " << size(root) << endl;
}
