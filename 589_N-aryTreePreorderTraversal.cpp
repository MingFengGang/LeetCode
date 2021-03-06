/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> res;
        helper(root,res);
        return res;
    }
    void helper(Node* node,vector<int>& res)
    {
        if(!node)
            return;
        res.push_back(node->val);
        for(auto children:node->children)
        {
            helper(children,res);
        }
        return;
    }
};