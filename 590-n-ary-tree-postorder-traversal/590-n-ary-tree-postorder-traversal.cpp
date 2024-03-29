/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    //helper function'
    void helper(Node* root, vector<int> &res){
        if(root!=NULL){
            for(int i=0;i<root->children.size();i++){
                helper(root->children[i], res);
            }
            res.push_back(root->val);
        }
    }
    //main working function
    vector<int> postorder(Node* root) {
       vector<int> res;
        if(root==NULL) return res;
        helper(root, res);
        return res; 
    }
};