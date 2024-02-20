#include<bits/stdc++.h>
using namespace std;

// Input: 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1

// output
// preorder: 1 2 4 5 7 3 6
// inorder: 4 2 7 5 1 3 6
// postorder: 4 7 5 2 6 3 1


class Node {
public:
	int data;
	Node * left;
	Node * right;

	Node(int d) {
		data = d;
		left = right = NULL;
	}
};


// Pre-order build of the Tree ->> Root node -> left tree -> right tree
Node* buildTree() {
	int d;
	cin >> d;

	if (d == -1) {
		return NULL;
	}

	Node* n = new Node(d);
	n->left = buildTree();
	n->right = buildTree();

	return n;
}

// root -> left -> right
void printPreorder(Node * root) {
	if (root == NULL) {
		return;
	}

	cout << root->data << " ";

	printPreorder(root->left);
	printPreorder(root->right);

}


// left , root , right
void printInorder(Node * root) {
	if (root == NULL) {
		return;
	}

	printInorder(root->left);
	cout << root->data << " ";
	printInorder(root->right);
}

// left , right , root
void printPostorder(Node * root) {
	if (root == NULL) {
		return;
	}

	printPostorder(root->left);
	printPostorder(root->right);
	cout << root->data << " ";
}

// level order output --> single line

void LevelOrderPrint(Node * root) {
	queue<Node *> q;

	q.push(root);
	q.push(NULL);

	while (!q.empty()) {
		Node * temp = q.front();

		if (temp == NULL) {
			cout << endl;
			q.pop();
			if (!q.empty()) {
				q.push(NULL);
			}
		}
		else {
			q.pop();
			cout << temp->data << " ";
			if (temp->left) {
				q.push(temp->left);
			}
			if (temp->right) {
				q.push(temp->right);
			}
		}
	}

}

Node* LevelOrderBuild() {

	int d;
	cin >> d;

	Node * root = new Node(d);

	queue<Node *> q;
	q.push(root);

	while (!q.empty()) {
		Node * current = q.front();
		q.pop();

		int c1, c2;
		cin >> c1 >> c2;

		if (c1 != -1) {
			current->left = new Node(c1);
			q.push(current->left);
		}
		if (c2 != -1) {
			current->right = new Node(c2);
			q.push(current->right);
		}

	}

	return root;
}

int height(Node * root) {
	if (root == NULL) {
		return 0;
	}

	int h1 = height(root->left);
	int h2 = height(root->right);

	return 1 + max(h1, h2);
}

vector<int> printKthLevel(Node* root, int k) {
	// your code goes here
	queue<Node*> q;
	q.push(root);
	q.push(NULL);

	vector<int> v;
	int c = 0;
	if (k == 0) {
		v.push_back(root->data);
		return v;
	}
	while (!q.empty()) {
		Node* temp = q.front();
		if (temp == NULL) {
			c++;
			q.pop();
			q.push(NULL);
			if (c == k) {


				while (!q.empty()) {
					Node * el = q.front();
					q.pop();
					if (el != NULL) {
						v.push_back(el->data); //el->key
					}
				}

				break;
			}
		}
		else {
			q.pop();
			if (temp->left)
				q.push(temp->left);
			if (temp->right)
				q.push(temp->right);
		}

	}

	return v;

}

int sumBT(Node* root)
{
	// Code here
	queue<Node *> q;
	q.push(root);
	q.push(NULL);

	int sum = 0;

	while (!q.empty()) {
		Node * temp = q.front();

		if (temp == NULL) {
			q.pop();
			if (!q.empty()) {
				q.push(NULL);
			}
		}
		else {
			q.pop();
			sum += temp->data;
			if (temp->left)
				q.push(temp->left);
			if (temp->right)
				q.push(temp->right);
		}
	}

	return sum;

}

// diameter of tree

// Time Complexity of this approach --> O(N^2)
int diameter(Node * root) {

	// base case
	if (root == NULL) {
		return 0;
	}

	// recursive case
	int d1 = height(root->left) + height(root->right);
	int d2 = diameter(root->left);
	int d3 = diameter(root->right);

	return max(d1, max(d2, d3));

}

//diameter of tree optimised

//Time complexity of this approach --> O(N)

class HDPair {
public:
	int height;
	int diameter;
};

HDPair optDiameter(Node * root) {
	HDPair p;

	if (root == NULL) {
		p.height = p.diameter = 0;
		return p;
	}

	HDPair Left = optDiameter(root->left);
	HDPair Right = optDiameter(root->right);

	p.height = max(Left.height, Right.height) + 1;

	int D1 = Left.height + Right.height;
	int D2 = Left.diameter;
	int D3 = Right.diameter;

	p.diameter = max(D1, max(D2, D3));

	return p;
}


int minDepth(Node *root) {
	// Your code here
	int leftHeight = height(root->left);
	int rightHeight = height(root->right);

	return 1 + min(leftHeight, rightHeight);

}


bool isSymmetric(Node* root) {

	queue<Node*> q;
	vector<Node *> v;

	q.push(root);
	q.push(NULL);
	int flag = 0;

	while (!q.empty()) {
		Node * temp = q.front();


		if (temp == NULL) {
			q.pop();
			int e = v.size() - 1;
			int s = 0;
			while (s < e) {

				Node * start = v[s];
				Node * end = v[e];

				if (start->data != end->data) {
					return false;
				}

				s++;
				e--;
			}

			v.clear();

			if (!q.empty()) {
				q.push(NULL);
			}

		}
		else {

			q.pop();

			if (temp->left) {
				q.push(temp->left);
				v.push_back(temp->left);
			}
			if (temp->right) {
				q.push(temp->right);
				v.push_back(temp->right);
			}
		}

	}

	return true;

}


bool isSymmetric(Node* root) {
	queue<Node*> q1;
	queue<Node*> q2;
	if (root == NULL || (root->right == NULL && root->left == NULL)) return true;
	if (root->right == NULL || root->left == NULL) return false;
	q1.push(root->left);
	q2.push(root->right);
	while (!q1.empty() && !q2.empty())
	{
		Node* f1 = q1.front();
		q1.pop();
		Node* f2 = q2.front();
		q2.pop();
		if (q1.empty() && !q2.empty()) return false;
		if (!q1.empty() && q2.empty()) return false;
		if (f1->left == NULL && f2->right != NULL) return false;
		if (f1->left != NULL && f2->right == NULL) return false;
		if (f1->key != f2->key) return false;
		if (f1->left) q1.push(f1->left);
		if (f1->right) q1.push(f1->right);
		if (f2->right) q2.push(f2->right);
		if (f2->left) q2.push(f2->left);
	}
	if (q1.empty() && q2.empty()) return true;
	return false;
}



int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// Node *root = buildTree();
	// printPreorder(root);
	// printInorder(root);
	// printPostorder(root);

	Node * root = LevelOrderBuild();
	LevelOrderPrint(root);

	cout << "Height of tree: " << height(root) << endl;
	/*
	cout << "Kth level elements are: " << endl;

	vector<int> v = printKthLevel(root, 0);
	int n = v.size();
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
	*/

	// cout << "Sum of all elements of tree is: " << sumBT(root) << endl;

	// cout << "Max. diameter of tree: " << diameter(root) << endl;
	// cout << "Opt. Diameter of tree: " << optDiameter(root).diameter << endl;

	cout << "Min. Depth of tree is: " << minDepth(root) << endl;

	if (isSymmetric(root)) {
		cout << "Tree is symmetric" << endl;
	}
	else {
		cout << "Tree is not symmetric" << endl;
	}



	return 0;
}
