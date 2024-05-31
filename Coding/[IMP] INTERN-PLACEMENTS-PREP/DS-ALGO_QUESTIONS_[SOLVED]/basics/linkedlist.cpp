
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
	// setting up the base value, post that we add dynamic values
	Node* node = root;

	int n = 5;
	for (int i = 0 ; i < n ; i++) {
		int data; cin >> data;
		node = adddata(node, data); 
		// we don not have to iterate over the end of the node to add new node as observe we are returning the newly created node directly hence nodes are getting added on it 
	}

	// traversal can be done using while loop

// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}

