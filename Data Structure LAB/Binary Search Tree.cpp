//#include<vector>
//#include<iostream>
//#include <string>
//using namespace std;
//
//
////��������һ���ڵ�ṹ 
//struct BinaryTreeNode { 
//    int val;
//    BinaryTreeNode *left;
//    BinaryTreeNode *right;
//    BinaryTreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//
////ʹ�õݹ�ķ������������� 
//struct BinaryTreeNode *CreatBinaryTree(){
//    int a;
//    cin >> a; //�ж���Ҷ�Ӿ���Ҫ����2���� 0 ���ܽ����������� 
//    if(a == 0) return NULL;
//
//    struct BinaryTreeNode *newnode = (struct BinaryTreeNode*)malloc( sizeof(struct BinaryTreeNode) );
//    newnode->val = a;
//    newnode->left  = CreatBinaryTree();  //�ݹ鴴��������
//    newnode->right = CreatBinaryTree();  //�ݹ鴴��������
//    return newnode;
//}
//
//
////�������
//void PreOrderTraverse(struct BinaryTreeNode *root){
//    if(root){
//        cout << root->val << ' ';
//        PreOrderTraverse(root->left);
//        PreOrderTraverse(root->right);
//    }
//}
//
//
////�������
//void InOrderTraverse(struct BinaryTreeNode *root){  
//    if(root){
//        InOrderTraverse(root->left);
//        cout << root->val << ' ';
//        InOrderTraverse(root->right);
//    }
//}
//
//
////�������
//void LastOrderTraverse(struct BinaryTreeNode *root){
//    if(root){
//        LastOrderTraverse(root->left);
//        LastOrderTraverse(root->right);
//        cout << root->val << ' ';
//    }
//}
//
//
////�������ڵ�����Ŀ
//int NodeNum(struct BinaryTreeNode *root){
//    
//    if(root)
//        return 1+NodeNum(root->left)+NodeNum(root->right);
//    else
//        return 0;
//}
//
//
////������Ҷ�ӽڵ���
//int LeafNum(struct BinaryTreeNode *root){
//    if(!root)
//        return 0;
//    else if( (root->left == NULL) && (root->right == NULL) )
//        return 1;
//    else
//        return LeafNum(root->left) + LeafNum(root->right);
//}
//
//
////������������
//int maxDepth(struct BinaryTreeNode *root){
//    if(root == NULL) return 0;
//    return max(maxDepth(root->left), maxDepth(root->right)) + 1;
//}
//
//
////��������С���(�Ӹ��ڵ㵽���Ҷ�ӽڵ�,ע����Ҷ��)
//int minDepth(struct BinaryTreeNode *root){  
//    if(root == NULL) return 0;
//    if(root->left == NULL) return minDepth(root->right) + 1;
//    if(root->right == NULL) return minDepth(root->left) + 1;
//    return min(minDepth(root->left), minDepth(root->right)) + 1;
//}
//
//
////����������·��
//void dfspath(BinaryTreeNode* node,string path,vector<string> &result){
//    path += to_string(node->val);
//    //�������ӽڵ��ˣ�
//    if(node->left==NULL && node->right==NULL) result.push_back(path);
//    if(node->left!=NULL) dfspath(node->left, path + "->",result);
//    if(node->right!=NULL) dfspath(node->right,path + "->",result);
//} 
//vector<string> binaryTreePaths(BinaryTreeNode* root) {
//    vector<string> result;
//    if(root!=NULL) dfspath(root,"",result);
//    return result;
//}
//
//
//int main(){
//    struct BinaryTreeNode *root;
//    
//    root = CreatBinaryTree();
//    
//    cout<<"�������ܽڵ���Ϊ��"<<NodeNum(root)<<endl;
//    
//    cout<<"������Ҷ�ӽڵ���Ϊ��"<<LeafNum(root)<<endl;
//    
//    cout<<"������������(�Ӹ��ڵ㵽��ԶҶ�ӽڵ�)��"<<maxDepth(root)<<endl;
//    
//    cout<<"��������С���(�Ӹ��ڵ㵽���Ҷ�ӽڵ�)��"<<minDepth(root)<<endl;
//    
//    cout<<"ǰ��������:";
//    PreOrderTraverse(root);
//    cout<<endl;
//    
//    cout<<"����������:";
//    InOrderTraverse(root);
//    cout<<endl;
//    
//    cout<<"����������:";
//    LastOrderTraverse(root);
//    cout<<endl;
//    
//    cout<<"����������·����\n";
//    vector<string> allPaths = binaryTreePaths(root);
//    for(auto e:allPaths) cout <<"\t" << e <<endl;
//    
//    return 0;
//}