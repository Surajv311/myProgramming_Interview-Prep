
class Node {
public:
	int data;
	Node* next;
	Node(int data) {
		this->data = data;
		next = 0;
	}
};

Node* adddata(Node*&node, int data)
{
	Node* newNode = new Node(data);
	node->next = newNode;
	return newNode;

}

int32_t main() {
///////////
//	c_p_c();
///////////
	_IOS
//////////

	Node* root = new Node(10);// root node
	Node* node = root;

	int n = 5;
	for (int i = 0 ; i < n ; i++) {
		int data; cin >> data;
		node = adddata(node, data);
	}

	// traversal can be done using while loop

// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

