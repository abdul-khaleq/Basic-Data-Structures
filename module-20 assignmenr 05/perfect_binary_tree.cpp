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

bool perfect_tree(Node* root)
{
    if(root->left == NULL && root->right == NULL) return true;
    if(root->left == NULL || root->right == NULL) return false;
    bool l =perfect_tree(root->left);
    bool r =perfect_tree(root->right);
    if(l == false || r == false) return false;
    return true;
}
int main(){
    Node* root = input_tree();
    bool perfectTree =perfect_tree(root);

    if(perfectTree){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}