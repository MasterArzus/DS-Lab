//#include <iostream>
//#include <queue>
//using namespace std;
//struct BTreeNode
//{
//	string data;
//	BTreeNode* left;
//	BTreeNode* right;
//};
//
//class BTree
//{
//public:
//	void levelCreate(BTreeNode*& Node)
//	{
//		queue<BTreeNode*> que;
//		int n;
//		int counter = 1;
//		cin >> n;
//
//		string data;
//		cin >> data;
//		if (data != "null")
//		{
//			Node = new BTreeNode;
//			Node->data = data;
//			que.push(Node);
//		}
//		else {
//			Node = NULL;
//			return;
//		}
//
//		while (!que.empty())
//		{
//			BTreeNode* node = que.front();
//			que.pop();
//
//			//left
//			if (counter < n)
//			{
//				cin >> data;
//				if (data != "null")
//				{
//					node->left = new BTreeNode;
//					node->left->data = data;
//					que.push(node->left);
//				}
//				else{node->left = NULL;}
//				counter++;
//			}
//			else{node->left = NULL;}
//
//			//right
//			if (counter < n)
//			{
//				cin >> data;
//				if (data != "null")
//				{
//					node->right = new BTreeNode;
//					node->right->data = data;
//					que.push(node->right);
//				}
//				else{node->right = NULL;}
//				counter++;
//			}
//			else{node->right = NULL;}
//		}
//	}
//
//	void clear(BTreeNode*& Node)
//	{
//		if (Node)
//		{
//			clear(Node->left);
//			clear(Node->right);
//			delete Node;
//		}
//	}
//
//	int search(BTreeNode* p, string m, string n)
//	{
//		if (p != NULL)
//		{
//			int leftcount = 0, rightcount = 0;
//
//			leftcount = search(p->left, m, n);
//			rightcount = search(p->right, m, n);
//
//			if (p->data == m || p->data == n) {
//				if (leftcount == 1 || rightcount == 1){ 
//					cout << p->data << endl;
//					return 0; 
//				}
//				else{ return 1; }
//			}
//			else {
//				if ((leftcount == 1 && rightcount == 1)){ cout << p->data << endl; }
//				else if (leftcount == 1 || rightcount == 1){ return 1; }
//				else{ return 0; }
//			}
//		}
//		else{ return 0; }
//	}
//};
//
//
//int main()
//{
//	BTree tree;
//	BTreeNode* root;
//	tree.levelCreate(root);
//
//	int N = 0;
//	cin >> N;
//	while (N--)
//	{
//		string x, y;
//		cin >> x >> y;
//		tree.search(root, x, y);
//	}
//	tree.clear(root);
//	return 0;
//}
