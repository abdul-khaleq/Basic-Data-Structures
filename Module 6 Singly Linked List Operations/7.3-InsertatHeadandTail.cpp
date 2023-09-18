#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, Node *tail, Node val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        // cout<<"Inset at tail"<<endl;
        // cout<<tail->val<<endl;
        return;
    }
    tail->next = newNode;
    tail = newNode;
    cout<<"Inset at tail 2"<<endl;
}
void insert_at_head(Node *&head, int val){
    Node *newNode = new Node(val);
        if(head == NULL){
        head = newNode;
        // cout<<"Inset at tail"<<endl;
        // cout<<tail->val<<endl;
        return;
    }
    newNode->next = head;
    head = newNode;
    // cout<<"Inset at head"<<endl;
    // cout<<head->val<<endl;
}
void print_linked_list(Node *head){
    Node *tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
int main(){
    Node *head = NULL;
    Node *tail = NULL;
    // int val;
    // while(true){
    //     cin>>val;
    //     if(val == -1) break;
    //     insert_tail(head, tail, val);
    // }
    int q;
    cin>>q;
    for(int i=0; i<q; i++){
    int pos, val;
    cin>>pos>>val;
    if(pos == 0){
        insert_at_head(head, val);
    }else if(pos == 1){
        insert_at_tail(head, tail, val);
    }
    }
    // cout<<head->val<<" "<<tail->val<<endl;
    print_linked_list(head);
    return 0;
}