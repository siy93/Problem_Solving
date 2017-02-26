#include<iostream>
using namespace std;

class Node {
public:
	int data;
	Node(int data);
	Node();
	~Node();
};

Node::Node(int data){
	this->data = data;
}

Node::~Node(){

}


class Stack{
public:
	int capacity;
	int top;
	Node** nodes;

	Stack(int capacity);
	~Stack();

	void push(int data);
	int pop();
	bool isEmpty();
	int getSIze();
	int getTop();
};

Stack::Stack(int capacity){
	this->nodes = new Node*[capacity];
	this->capacity = capacity;
	this->top = 0;
}

Stack::~Stack(){
	for (int i = 0; i < this->capacity; i++){
		if (this->nodes[i]){
			delete this->nodes[i];
		}
	}

	delete[] this->nodes;
}

void Stack::push(int data){
	this->nodes[this->top++] = new Node(data);
}

int Stack::pop() {
	if (!this->top){ return -1;}
	int data = this->nodes[--(this->top)]->data;
	return data;
}

bool Stack::isEmpty(){
	return (this->top == 0);
}

int Stack::getSIze(){
	return this->top;
}

int Stack::getTop(){
	if (!this->top){ return -1; }
	return this->nodes[this->top-1]->data;
}

int main()
{
	int T, num;
	char order[5];
	Stack stack(10000);

	for (cin >> T; T--;){
		cin >> order;
		switch(order[0]){
		case 'p':
			if (order[1] == 'u')
			{
				cin >> num;
				stack.push(num);
			}
			else{
				cout << stack.pop() << endl;
			}
			break;
		case 't':
			cout << stack.getTop() << endl;
			break;
		case 's':
			cout << stack.getSIze() << endl;
			break;
		case 'e':
			cout << stack.isEmpty() <<endl;
			break;
		}
	}

	return 0;
}
