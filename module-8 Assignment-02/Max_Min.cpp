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
void findMaxMin( Node *head){
    int size = countLength(head);
    Node *tmp = head;
    int minValue = INT_MAX;
    int maxValue = INT_MIN;
    for(int i =0; i<size; i++){
        if(tmp->val < minValue){
            minValue = tmp->val;
        }
        if(tmp->val > maxValue){
            maxValue = tmp->val;
        }
        tmp = tmp->next;
    }
    cout<<maxValue<<" "<<minValue<<endl;
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
    findMaxMin(head);
    return 0;
}