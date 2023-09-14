#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    string val;
    Node *next;
    Node *prev;
    Node(string val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
// void insertHead(Node *& head, Node *&tail, string val){
//     Node *newNode = new Node(val);
//     if(head == NULL){
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     newNode->next = head;
//     head->prev = newNode;
//     head = newNode;
// }
void insertTail(Node *&head, Node *&tail, string val){
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

int size(Node *head){
    Node *tmp = head;
    int cnt = 0;
    while(tmp != NULL){
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
int main(){
    Node * head = NULL;
    Node * tail = NULL;
    string val;
        while(true){
        cin>>val;
        if(val == "end") break;
        insertTail(head, tail, val);
    }
int sz = size(head);
    int n;
    cin>>n;
    for(int i=1; i<=n;i++){
        string val2;
        cin>>val2;
        if(val2 == "visit"){
            cin>>val2;
        }
        cin.ignore();
        Node * tmp = head;
        Node * curNode ;
        int k = 0;
        while(tmp != NULL){
            k++;
        if(val2 == tmp->val){
            k=0;
             cout<<tmp->val<<endl;
             curNode = tmp;
             break;
        }
        else if(sz == k){
            cout<<"Not Available"<<endl;
        }
        else if(val2 == "next"){
            if(curNode->next){
                curNode = curNode->next;
                cout<<curNode->val<<endl;
                break;
            }else{
                 cout<<"Not Available"<<endl;
                 break;
            }
                
        }else if(val2 == "prev"){
            if(curNode->prev){
                curNode = curNode->prev;
                cout<<curNode->val<<endl;
                break;
                }else{
                    cout<<"Not Available"<<endl;
                    break;
                }
            }
        tmp = tmp->next;  
    }
    }
    return 0;
}