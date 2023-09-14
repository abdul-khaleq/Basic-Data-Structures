#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class myStack{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;
    void push(int val){
        sz++;
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }
        void pop(){
        sz--;
        Node* deleteNode = tail;
        tail = tail->prev;
        delete deleteNode;
    }

    int top(){
        return tail->val;
    }
    int size(){
        return sz;
    }
    bool emtry(){
        if(sz == 0) return true;
        else return false;
    }
};
class myQueue{
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int sz = 0;
    void push(int val){
        sz++;
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }
    void pop(){
        sz--;
        Node* deleteNode = head;
        head = head->next;
        if(head == NULL){
            tail = NULL;
            delete deleteNode;
            return;
        }
        head->prev = NULL;
        delete deleteNode;
    }
    int front(){
        return head->val;
    }
    int size(){
        return sz;
    }
    bool emptry(){
        if(sz == 0) return true;
        else return false;
    }
};
int main()
{
    // Write your code here
    myStack st;
    int n;
    cin>>n;
    int m;
    cin>>m;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        st.push(x);
    }
    
    myQueue q;
    // cout<<endl<<endl;
    for(int i=0; i<m; i++){
        int x;
        cin>>x;
        q.push(x);
    }
    // while(!q.emptry()){
    //     cout<<q.front()<<endl;
    //     q.pop();
    // }
    // while(!st.emtry()){
    //     cout<<st.top()<<endl;
    //     st.pop();
    // }
    int same = 1;
    if(st.size() == q.size()){
        while(!q.emptry() && !st.emtry()){
        if(st.top() != q.front()){
            same = 0;
        }
        q.pop();
        st.pop();
    }
    }else{
        same = 0;
    }
    if(same){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}