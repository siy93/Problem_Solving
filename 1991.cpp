#include<iostream>
#include<map>
using namespace std;

class tree{
public:
	char node;
	int left;
	int right;
};
tree t[30];
map<char, int> m;

void preOrder(int n){
	if(n == -1) return;
	cout << t[n].node;
	preOrder(t[n].left);
	preOrder(t[n].right);
}

void inOrder(int n){
	if (n == -1) return;	
	inOrder(t[n].left);
	cout << t[n].node;
	inOrder(t[n].right);
}

void postOrder(int n){
	if (n == -1) return;
	postOrder(t[n].left);
	postOrder(t[n].right);
	cout << t[n].node;
}

int main()
{
	int n;
	char a, b, c;

	for (cin >> n; n--;){
		cin >> a >> b >> c;

		if (m[a] == 0) m[a] = m.size();
		if (m[b] == 0) m[b] = m.size();
		if (m[c] == 0) m[c] = m.size();

		t[m[a]].node = a;
		if (b == '.')
			t[m[a]].left = -1;
		else
			t[m[a]].left = m[b];

		if (c == '.')
			t[m[a]].right = -1;
		else
			t[m[a]].right = m[c];
	}

	preOrder(1);
	cout << endl;
	inOrder(1);
	cout << endl;
	postOrder(1);
	cout << endl;

	return 0;
}
