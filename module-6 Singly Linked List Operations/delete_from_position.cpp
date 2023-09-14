#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node* &head, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        cout<<"Inserted at Head"<<endl;
        return;
    }
    Node *tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    // tmp akhn last Node a
    tmp->next = newNode;
    cout<<"Inserted at Tail"<<endl;
}
void print_linkedList(Node *head){
    cout<<"Your Linked List ";
    Node * tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void insert_at_position(Node *head, int pos, int val){
    Node *newNode = new Node(val);
    Node *tmp = head;
    for(int i=1; i<= pos -1; i++){
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout<<"Inserted at position"<<pos<<endl;
}
void insert_at_head(Node * &head, int val){
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    cout<<"Inserted at head"<<endl;
}
void delete_from_position(Node *head, int pos){
    Node *tmp = head;
    for(int i=1; i<=pos-1; i++){
        tmp = tmp->next;
    }
    Node * deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
void delete_head(Node *head){
    Node *tmp = head;
    Node * deletHead = tmp;
    tmp = tmp->next;
    delete deletHead;
}
int main(){
    Node* head = NULL;
    while(true){
        cout<<"Option 1: Insert at Tail"<<endl;
        cout<<"Option 2: Print Linked List"<<endl;
        cout<<"Option 3: Insert at any position"<<endl;
        cout<<"Option 4: Insert at head"<<endl;
        cout<<"Option 5: delete from position"<<endl;
        cout<<"Option 6: Terminate"<<endl;
    int op;
    cin>>op;
    if(op == 1){
        cout<<"Please enter value"<<endl;
        int v;
        cin>>v;
        insert_at_tail(head, v);
    }else if(op == 2){
        print_linkedList(head);
    }else if(op == 3){
        cout<<"Enter position"<<endl;
        int pos, v;
        cin>>pos;
        cout<<"Enter value"<<endl;
        cin>>v;
        if(pos == 0){
            insert_at_head(head, v);
        }else{
            insert_at_position(head, pos, v);
        } 
    }else if(op == 4){
        cout<<"Enter value"<<endl;
        int val;
        cin>>val;
        insert_at_head(head, val);
    }else if(op == 5){
        cout<<"Enter position to delete"<<endl;
        int pos;
        cin>>pos;
        if(pos == 0){
            delete_head(head);
        }else{
            delete_from_position(head, pos);
        }
    }else if(op == 6){
        break;
    }
    }
    return 0;
}