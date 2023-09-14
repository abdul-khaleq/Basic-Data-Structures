#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node *prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insertHead(Node *& head, Node *&tail, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insertTail(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);
    if(tail == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
void insertAtPosition(Node *head, int pos, int val){
    Node *newNode = new Node(val);
    Node *tmp = head;
    for(int i=1; i<=pos -1; i++){
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
}
void printNormal(Node * head){
    Node * tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
    
}
int size(Node *head){
    Node *tmp = head;
    int cnt = 0;
    while(tmp != NULL){
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void printReverse(Node *tail){
    Node *tmp = tail;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;
}
int main(){
    Node * head = NULL;
    Node * tail = NULL;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
    int pos, val;
    cin>>pos>>val;
    if(pos == 0){
        insertHead(head, tail, val);
    }else if(pos == size(head)){
        insertTail(head, tail, val);
    }else if(pos>=size(head)){
        cout<<"Invalid"<<endl;
        continue;
    }else{
        insertAtPosition(head, pos, val);
    }
    cout<<"L -> ";
    printNormal(head);
    cout<<"R -> ";
    printReverse(tail);
    }
    
    return 0;
}