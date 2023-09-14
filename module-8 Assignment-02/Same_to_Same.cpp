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
void insert_tail(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int countLength(Node *&head){
    int count = 0;
    Node *tmp = head;
    while(tmp != NULL){
        count++;
        tmp = tmp->next;
    }
    return count;
}
void sameTosame(Node *head, Node *head2){
    Node *tmp = head;
    Node *tmp2 = head2;
    int size = countLength(head);
    int size2 = countLength(head2);
    int same = 1;
    if(size ==size2){
    while(tmp != NULL || tmp2 !=NULL){
        if(tmp->val != tmp2->val){
            same = 0;
        }
        tmp = tmp->next;
        tmp2 = tmp2->next;
    }
    }else{
        same = 0;
    }
    if(same){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
int main(){
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while(true){
        cin>>val;
        if(val == -1) break;
        insert_tail(head, tail, val);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val2;
    while(true){
        cin>>val2;
        if(val2 == -1) break;
        insert_tail(head2, tail2, val2);
    }
    sameTosame(head, head2);
    return 0;
}