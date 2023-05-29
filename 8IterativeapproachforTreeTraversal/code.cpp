/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    // void preorderfun(vector<int>&preorder, TreeNode* root){
    //     if(root==NULL){return;}
    //     preorder.push_back(root->val);
    //     preorderfun(preorder,root->left);
    //     preorderfun(preorder,root->right);
    // }
    
    vector<int> preorderTraversal(TreeNode* root) {
        // vector<int>preorder;
        // preorderfun(preorder,root);
        // return preorder;
        
        vector<int>preorder;
    if(root==NULL) return preorder;

    stack<TreeNode*>st;
    st.push(root);
    while(!st.empty()){
        root = st.top();
        st.pop();
        preorder.push_back(root->val);

        if(root->right!=NULL){
            st.push(root->right);
        }

        if(root->left!=NULL){
            st.push(root->left);
        }
    }
    return preorder;
    }
};



/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
//     recursion code
//     void inorderfun(vector<int>&inorder, TreeNode* root){
//         if(root==NULL){return;}
//          inorderfun(inorder,root->left);
//         inorder.push_back(root->val);
       
//         inorderfun(inorder,root->right);
//     }
    
    vector<int> inorderTraversal(TreeNode* root) {
        //  vector<int>inorder;
        // inorderfun(inorder,root);
        // return inorder;
        
        stack<TreeNode*>st;
        TreeNode* node = root;
        vector<int>inorder;
        
        while(true){
            if(node!=NULL){
                st.push(node);
                node=node->left;
            }
            else{
                if(st.empty()==true) break;
                node =st.top();
                st.pop();
                inorder.push_back(node->val);
                node=node->right;
            }
        }
        return inorder;
    }
};

