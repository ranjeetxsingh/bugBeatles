#include<bits/stdc++.h>
using namespace std;


class Node {
public:
	int key;
	Node *left;
	Node *right;

	Node(int key) {
		this->key = key;
		left = right = NULL;
	}
};

Node * insert(Node * root, int key) {
	if (root == NULL) {
		return new Node(key);
	}

	// recursive case
	if (key < root->key) {
		root->left = insert(root->left, key);
	}
	else {
		root->right = insert(root->right, key);
	}

	return root;
}

bool search(Node * root, int key) {

	if (root == NULL) {
		return false;
	}

	if (root->key == key) {
		return true;
	}

	if (key < root->key) {
		return search(root->left, key);
	}
	else {
		return search(root->right, key);
	}

}

void printInOrder(Node * root) {
	if (root == NULL) {
		return;
	}

	printInOrder(root->left);
	cout << root->key << " , ";
	printInOrder(root->right);
}

Node* findmin(Node* root) {

	while (root->left != NULL) {
		root = root->left;
	}

	return root;
}

Node* remove(Node* root, int key) {
	if (root == NULL) {
		return NULL;
	}
	else if (key < root->key) {
		root->left = remove(root->left, key);
	}
	else if (key > root->key) {
		root->right = remove(root->right, key);
	}
	else {
		// when the current node matches with key
		// NO children
		if (root->left == NULL and root->right == NULL) {
			delete root;
			root = NULL;
		}
		// Single Child
		else if (root->left == NULL) {
			Node* temp = root;
			root = root->right;
			delete temp;
		}
		else if (root->right == NULL) {
			Node* temp = root;
			root = root->left;
			delete temp;
		}
		else {
			Node* temp = findmin(root->right);
			root->key = temp->key;
			root->right = remove(root->right, temp->key);
		}
	}

	return root;
}

void printInRange(Node * root, int start, int end) {
	if (root == NULL) {
		return;
	}
	if (root->key >= start and root->key <= end) {
		printInRange(root->left, start, end);
		cout << root->key << " ";
		printInRange(root->right, start, end);

	}
	else if (root->key > end) {
		printInRange(root->left, start, end);
	}
	else if (root->key < start) {
		printInRange(root->right, start, end);
	}

	return;
}

void printRootToLeafNode(Node* root, vector<int> &path) {
	if (root == NULL) {
		return;
	}
	if (root->left == NULL and root->right == NULL) {
		for (int node : path) {
			cout << node << "->";
		}
		cout << root->key << " ";
		cout << endl;
		return;
	}

	path.push_back(root->key);
	printRootToLeafNode(root->left, path);
	printRootToLeafNode(root->right, path);
	path.pop_back();
	return;

}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Node * root = NULL;
	int arr[] = {8, 3, 10, 1, 6, 14, 4, 7, 13};

	for (int x : arr) {
		root = insert(root, x);
	}

	printInOrder(root);
	cout << endl;
	// int key;
	// cin >> key;
	// root = remove(root, key);

	// cout << "After removing tree is : " << endl;
	// printInOrder(root);
	// cout << endl;

	// printInRange(root, 5, 12);

	vector<int> path;
	printRootToLeafNode(root, path);




	// if (search(root, 8)) {
	// 	cout << "Element is present" << endl;
	// }
	// else {
	// 	cout << "Element is not present" << endl;
	// }

	return 0;
}
