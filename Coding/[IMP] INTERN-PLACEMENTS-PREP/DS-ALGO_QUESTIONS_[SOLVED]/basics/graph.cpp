

void dfs(vector<int> adj[], vector<int> &vis, int baseNode, vector<int>&ans) {
	vis[baseNode] = 1;
	ans.push_back(baseNode);
	for (auto node : adj[baseNode]) {
		if (!vis[node])
		{
			// if node not visited then we visit the node in recursive call, and we push node to ans as well
			dfs(adj, vis, node, ans);
		}
		// We cannot have else{return} below as in that case our loop will not visit any other child nodes of a node and do dfs for it - rather in first visit it may return
	}
	return;
}

void bfs(vector<int> adj[], vector<int> &vis, int baseNode, vector<int>&ans) {
	vis[baseNode] = 1;
	ans.push_back(baseNode);
	queue<int> q; q.push(baseNode);
	while (!q.empty()) {
		int base = q.front();
		q.pop();
		// doing bfs below for a node
		for (auto node : adj[base]) {
			if (!vis[node])
			{
				vis[node] = 1;
				ans.push_back(node);
				q.push(node);
			}
		}
	}
}

void creategraph(int node1, int node2, vector<int> adj[]) {
	// an array is passed by reference in simple words; to be more technical ~ you pass a pointer to its first element. Hence in vector<int> adj[] we are not specifically adding '&' ~  vector<int> adj[]& like this, as it would give error as well.
	adj[node1].push_back(node2);
	adj[node2].push_back(node1);// to make graph bidirectional
	// for unidirectional/directed - comment one of them

	// for a weighted graph:
	// adj[node1].push_back({node2, weight});

	return;
}

int32_t main() {
///////////
//	c_p_c();
///////////
	_IOS
//////////

	int V = 4; int edges = 5;
	vector<int> adj[V];

	for (int i = 0; i < edges ; i++) {
		int u, v;
		cin >> u >> v;
		creategraph(u, v, adj);
	}

	vector<int> vis(V, 0);
	int baseNode = 0;
	vector<int> ans;
	
	// can do either dfs/bfs - commenting one of them for now. 
	dfs(adj, vis, baseNode, ans);
	// bfs(adj, vis, baseNode, ans);

	// // Just printing 
	// for (auto i : ans) {
	// 	cout << i << " ";
	// }

	// for (auto i : adj) {
	// 	for (auto j : i) cout << j << " ";
	// }

// Note: When you try to access say: adj[53] from the geaph you constructed - essentially we are using adjacency list, you're accessing an out-of-bounds index, leading to undefined behavior.



// cerr << "time: " << clock() << " ms" << '\n';
	return 0;
}
