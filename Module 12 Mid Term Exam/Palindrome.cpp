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
void insertTail(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void reverse(Node *&head, Node* cur){
    if(cur->next == NULL){
        head = cur;
        return;
    }
    reverse(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}
int main(){
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while(true){
        cin>>val;
        if(val == -1) break;
        insertTail(head, tail, val);
    }
        Node *newHead = NULL;
        Node * newTail = NULL;
        Node *tmp = head;
        while(tmp != NULL){
            insertTail(newHead, newTail, tmp->val);
            tmp = tmp->next;
        }
        reverse(newHead, newHead);
        tmp = head;
        Node *tmp2 = newHead;
        int result = 1;
        while(tmp != NULL){
            if(tmp->val !=tmp2->val){
                result = 0;
            }
            tmp = tmp->next;
            tmp2 = tmp2->next;
        }
if(result){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}
    return 0;

}