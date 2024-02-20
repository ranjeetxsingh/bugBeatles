

class queue;

class Node {
public:
	int data;
	Node * next;

	Node(int d) {
		data = d;
	}

};

class Queue {

	Node * front;
	Node * rear;
	int cs;

public:


	Queue() {
		front = NULL;
		rear = NULL;
		cs = 0;
	}


	bool empty() {
		return cs == 0;
	}

	void push(int data) {
		if (empty()) {
			Node * n = new Node(data);
			n->next = NULL;
			front = n;
			rear = n;
			cs++;
		}
		else {
			Node * n = new Node(data);
			n->next = NULL;
			rear->next = n;
			rear = n;
			cs++;
		}

	}

	void pop() {
		Node * temp = front;
		front = front->next;
		delete temp;
		cs--;
	}

	int getFront() {
		return front->data;
	}

};