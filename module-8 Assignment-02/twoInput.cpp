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
// void insert_tail(Node *&head2, Node *&tail2, int val2){
//     Node *newNode2 = new Node(val2);
//     if(head2 == NULL){
//         head2 = newNode2;
//         tail2 = newNode2;
//         return;
//     }
//     tail2->next = newNode2;
//     tail2 = newNode2;
// }
int countLength(Node *&head){
    int count = 0;
    Node *tmp = head;
    while(tmp != NULL){
        count++;
        tmp = tmp->next;
    }
    return count;
}
// void findMid( Node *head){
//     int size = countLength(head);
//     int mid = (size + 1) / 2;
//     Node *tmp = head;
//     for(int i =0; i<mid-1; i++){
//         tmp = tmp->next;
//     }
//     if(size % 2 == 0){
//         cout<<tmp->val<<" "<<tmp->next->val<<endl;
//     }else{
//         cout<<tmp->val<<endl;
//     }
// }
void sameTosame(Node *head, Node *head2){
    Node *tmp = head;
    Node *tmp2 = head2;
    int size = countLength(head);
    int size2 = countLength(head2);
    int same = 1;
    if(size ==size2){
    while(tmp != NULL || tmp2 !=NULL){
        // cout<<tmp->val<<" ";
        // cout<<tmp2->val<<" ";
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
// void sameTosame2(Node *head){
//     Node *tmp = head;
//     while(tmp != NULL){
//         cout<<tmp->val<<" ";
//         tmp = tmp->next;
//     }
//     cout<<endl;
// }
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

    //     for(Node *i = head; i->next != NULL; i = i->next){
    //     for( Node *j = i->next; j != NULL; j = j->next){
    //         if(i->val == j->val){
    //             cout<<"OK";
    //         }else{
    //             cout<<"NO";
    //         }
    //     }
    // }

    sameTosame(head, head2);
    // sameTosame(head2);
    // sameTosame2(head2);
    // findMid(head);
    return 0;
}