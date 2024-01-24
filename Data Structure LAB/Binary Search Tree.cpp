//#include<vector>
//#include<iostream>
//#include <string>
//using namespace std;
//
//
////二叉树的一个节点结构 
//struct BinaryTreeNode { 
//    int val;
//    BinaryTreeNode *left;
//    BinaryTreeNode *right;
//    BinaryTreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//
////使用递归的方法创建二叉树 
//struct BinaryTreeNode *CreatBinaryTree(){
//    int a;
//    cin >> a; //有多少叶子就需要输入2倍个 0 才能结束创建进程 
//    if(a == 0) return NULL;
//
//    struct BinaryTreeNode *newnode = (struct BinaryTreeNode*)malloc( sizeof(struct BinaryTreeNode) );
//    newnode->val = a;
//    newnode->left  = CreatBinaryTree();  //递归创建左子树
//    newnode->right = CreatBinaryTree();  //递归创建右子树
//    return newnode;
//}
//
//
////先序遍历
//void PreOrderTraverse(struct BinaryTreeNode *root){
//    if(root){
//        cout << root->val << ' ';
//        PreOrderTraverse(root->left);
//        PreOrderTraverse(root->right);
//    }
//}
//
//
////中序遍历
//void InOrderTraverse(struct BinaryTreeNode *root){  
//    if(root){
//        InOrderTraverse(root->left);
//        cout << root->val << ' ';
//        InOrderTraverse(root->right);
//    }
//}
//
//
////后序遍历
//void LastOrderTraverse(struct BinaryTreeNode *root){
//    if(root){
//        LastOrderTraverse(root->left);
//        LastOrderTraverse(root->right);
//        cout << root->val << ' ';
//    }
//}
//
//
////二叉树节点总数目
//int NodeNum(struct BinaryTreeNode *root){
//    
//    if(root)
//        return 1+NodeNum(root->left)+NodeNum(root->right);
//    else
//        return 0;
//}
//
//
////二叉树叶子节点数
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
////二叉树最大深度
//int maxDepth(struct BinaryTreeNode *root){
//    if(root == NULL) return 0;
//    return max(maxDepth(root->left), maxDepth(root->right)) + 1;
//}
//
//
////二叉树最小深度(从根节点到最近叶子节点,注意是叶子)
//int minDepth(struct BinaryTreeNode *root){  
//    if(root == NULL) return 0;
//    if(root->left == NULL) return minDepth(root->right) + 1;
//    if(root->right == NULL) return minDepth(root->left) + 1;
//    return min(minDepth(root->left), minDepth(root->right)) + 1;
//}
//
//
////二叉树所用路径
//void dfspath(BinaryTreeNode* node,string path,vector<string> &result){
//    path += to_string(node->val);
//    //遍历到子节点了，
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
//    cout<<"二叉树总节点数为："<<NodeNum(root)<<endl;
//    
//    cout<<"二叉树叶子节点数为："<<LeafNum(root)<<endl;
//    
//    cout<<"二叉树最大深度(从根节点到最远叶子节点)："<<maxDepth(root)<<endl;
//    
//    cout<<"二叉树最小深度(从根节点到最近叶子节点)："<<minDepth(root)<<endl;
//    
//    cout<<"前序遍历结果:";
//    PreOrderTraverse(root);
//    cout<<endl;
//    
//    cout<<"中序遍历结果:";
//    InOrderTraverse(root);
//    cout<<endl;
//    
//    cout<<"后序遍历结果:";
//    LastOrderTraverse(root);
//    cout<<endl;
//    
//    cout<<"二叉树所有路径：\n";
//    vector<string> allPaths = binaryTreePaths(root);
//    for(auto e:allPaths) cout <<"\t" << e <<endl;
//    
//    return 0;
//}