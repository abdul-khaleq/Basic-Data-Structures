#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* input_tree(){
    int val;
    cin>>val;
    Node* root;
        if(val == -1){
            root = NULL;
        }else{
            root = new Node(val);
        };
    queue<Node*> q;
    if(root){
        q.push(root);
    };

    while(!q.empty()){

        // 1. ber kore ano
        Node* p = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
        int l, r;
        cin>>l>>r;
        Node* myLeft;
        Node* myRight;
        if(l == -1){
            myLeft = NULL;
        }else{
            myLeft = new Node(l);
        };
        if(r == -1){
            myRight = NULL;
        }else{
            myRight = new Node(r);
        };
        p->left = myLeft;
        p->right = myRight;

        // 3. children gulo k push koro
        if(p->left){
            q.push(p->left);
        };
        if(p->right){
            q.push(p->right);
        };
    }
    return root;
}

void searchBST(Node* root, int val) {
    if(root==NULL){
return;
}
if(root->val==val){
cout<<root->val;
}
if(root->val>val){
searchBST(root->left,val);
}
else{
searchBST(root->right,val);
}
cout<<root->val; 
}

int main(){
    Node* root = input_tree();
    searchBST(root, 2);





    vector<int> v;
    
    return 0;
}