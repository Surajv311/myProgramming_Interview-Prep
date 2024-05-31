

class Node {
public:
	int data;
	Node* left;
	Node*right;
	Node(int data) {
		this->data = data;
		left = 0;
		right = 0;
	}
};

Node* adddata(int data)
{
	Node* newNode = new Node(data);
	return newNode;
}

void inorder(Node*root, vector<int>&ans) {
	if (root == 0) return;
	inorder(root->left, ans);
	ans.push_back(root->data);
	inorder(root->right, ans);
}

int32_t main() {
///////////
//	c_p_c();
///////////
	_IOS
//////////


	Node* root = new Node(10);// root node

	// note: 	Node* node = 0; // 0 can only be assigned - can't assign pointer *x = 100 - it says it would yield datatype errors ~ int can not be converted to node*

	root->left = adddata(2);
	root->right = adddata(3);
	root->left->left = adddata(28);
	root->left->right = adddata(25);
	root->right->left = adddata(33);
	root->right->right = adddata(31);

	vector<int> ans;
	inorder(root, ans);
	for (auto i : ans)
	{
		cout << i << " ";
	}


// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

