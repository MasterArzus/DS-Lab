//#include <iostream>
//using namespace std;
//#include <queue>
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
//		while (!que.empty())
//		{
//			BTreeNode* node = que.front();
//			que.pop();
//			//输入左值
//			cin >> data;
//			if (data != "null")
//			{
//				node->left = new BTreeNode;
//				node->left->data = data;
//				que.push(node->left);
//			}
//			else
//			{
//				node->left = NULL;
//			}
//			//输入右值
//			cin >> data;
//			if (data != "null")
//			{
//				node->right = new BTreeNode;
//				node->right->data = data;
//				que.push(node->right);
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
//	BTree tree;
//	BTreeNode* boot;
//	tree.levelCreate(boot);
//	cout << "二叉树创建完成！" << endl;
//	cout << "前序遍历：" << endl;
//	tree.preorderTree(boot);
//	cout << endl;
//
//	system("pause");
//	tree.clear(boot);
//	cout << "二叉树清理完成！" << endl;
//	system("pause");
//	return 0;
//}
