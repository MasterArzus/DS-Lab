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
//				else
//				{
//					node->left = NULL;
//				}
//				counter++;
//			}
//			else
//			{
//				node->left = NULL;
//			}
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
//				else
//				{
//					node->right = NULL;
//				}
//				counter++;
//			}
//			else
//			{
//				node->right = NULL;
//			}
//		}
//	}
//
//	void preorderTree(BTreeNode* Node)
//	{
//		if (Node)
//		{
//			cout << Node->data << " ";
//			preorderTree(Node->left);
//			preorderTree(Node->right);
//		}
//		else { return; }
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
//};
//
//int main()
//{
//	int N = 0;
//	cin >> N;
//	while (N--)
//	{
//		BTree tree;
//		BTreeNode* root;
//		tree.levelCreate(root);
//		tree.preorderTree(root);
//		tree.clear(root);
//		cout << endl;
//	}
//	return 0;
//}
