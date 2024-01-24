//#include<iostream>
//#include <vector>
//#include<stack>
//#include<queue>
//using namespace std;
//
//struct Node
//{
//    int data;
//    vector<Node*>child;
//};
//
// Utility function to create a new tree node
//Node* newNode(int key)
//{
//    Node* temp = new Node;
//    temp->data = key;
//    return temp;
//}
//
//void LevelOrderTraversal(Node* root)
//{
//    if (root == NULL)
//        return;
//
//    queue<Node*> q;
//    q.push(root); 
//    while (!q.empty())
//    {
//        int n = q.size();
//
//        while (n > 0)
//        {
//            Node* p = q.front();
//            q.pop();
//            cout << p->data << " ";
//
//            for (int i = 0; i < p->child.size(); i++)
//                q.push(p->child[i]);
//            n--;
//        }
//        cout << endl;
//    }
//}
//
//
//int main()
//{
//    int N;
//    cin >> N;
//    while (N--)
//    {
//        vector<vector<int>> tree(110);
//        int temp;
//        cin>>temp;
//        int brankets_number = 0;
//        string input;
//
//        cin>>input;
//        for (int i = 0; input[i]; i++){
//            if (input[i] == '('){
//                brankets_number++;
//                continue;
//            }
//            if (input[i] == ')'){
//                brankets_number--;
//                continue;
//            }
//            if (input[i] == ','){ continue; }
//            else{
//                int number = 0;
//                while (isdigit(input[i])){
//                    number = number * 10 + input[i] - '0';
//                    i++;
//                }
//                tree[brankets_number].push_back(number);
//                i--;
//            }
//        }
//        for (auto y : tree){for (auto x : y){ cout << x << " "; }}
//        cout<<endl;
//    }
//
//    return 0;
//}