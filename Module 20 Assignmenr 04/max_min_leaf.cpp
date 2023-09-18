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
void max_min_leaf(Node* root, int *min, int *max){
    if(root == NULL){
        return;
    }
    if(root->left == NULL && root->right == NULL){
        if(root->val < *min){
            *min = root->val;
        }
        if(root->val > *max){
            *max = root->val;
        }
    }
        max_min_leaf(root->left, min, max);
        max_min_leaf(root->right, min, max);

}

int main(){
    Node* root = input_tree();
    int min = INT_MAX;
    int max = INT_MIN;
    max_min_leaf(root, &min, &max);
    cout<<max<<" "<<min<<endl;

    return 0;
}