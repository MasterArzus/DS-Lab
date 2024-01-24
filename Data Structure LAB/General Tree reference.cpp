//#include<iostream>
//#include <vector>
//#include<queue>
//using namespace std;
//
//struct Node
//{
//    int key;
//    vector<Node*>child;
//};
//
//Node* newNode(int key)
//{
//    Node* temp = new Node;
//    temp->key = key;
//    return temp;
//}
//
//void LevelOrderTraversal(Node* root)
//{
//    if (root == NULL)
//        return;
//
//    queue<Node*> q;
//
//    q.push(root);
//
//    while (!q.empty())
//    {
//        int n = q.size();
//        while (n--)
//        {
//            Node* p = q.front();
//            q.pop();
//            cout << p->key << " ";
//            for (int i = 0; i < p->child.size(); i++)
//            q.push(p->child[i]);
//        }
//        //cout << endl;
//    }
//}
//
//int main()
//{
//    Node* root = newNode('A');
//
//    (root->child).push_back(newNode('B'));
//
//    (root->child).push_back(newNode('C'));
//
//    (root->child).push_back(newNode('D'));
//
//    (root->child).push_back(newNode('E'));
//
//    (root->child).push_back(newNode('F'));
//
//    (root->child).push_back(newNode('G'));
//
//    (root->child[0]->child).push_back(newNode('H'));
//
//    (root->child[0]->child).push_back(newNode('I'));
//
//    (root->child[2]->child).push_back(newNode('J'));
//
//    (root->child[3]->child).push_back(newNode('K'));
//
//    (root->child[3]->child).push_back(newNode('L'));
//
//    (root->child[3]->child).push_back(newNode('M'));
//
//    (root->child[3]->child).push_back(newNode('N'));
//
//    LevelOrderTraversal(root);
//
//    return 0;
//}