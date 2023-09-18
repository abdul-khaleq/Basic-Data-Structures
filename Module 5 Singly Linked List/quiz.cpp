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
int main(){
    Node* head = new Node(5);
cout << head->val << endl;
if(head->val==NULL){
    cout<<"Empty";
}else{
    cout<<"Not empty";
}
    return 0;
}