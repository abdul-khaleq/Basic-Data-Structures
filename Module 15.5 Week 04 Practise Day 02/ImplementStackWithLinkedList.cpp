#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
	    int data;
	    Node *next;
	    Node(int data){
		    this->data = data;
		    this->next = NULL;
	        }
};
class Stack{
    //Write your code here
public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;
    Stack()
    {
        //Write your code here 
    }

    int getSize()
    {
        //Write your code here
        
    }

    bool isEmpty()
    {
        //Write your code here  

    }

    void push(int data)
    {
        //Write your code here
        sz++;
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }

    void pop()
    {
        //Write your code here
        if(head == NULL){
            return;
        }
        Node* deleteNode = head;

        // delete deleteNode;
    }

    int getTop()
    {
        //Write your code here
        return tail->data;
    }
};

int main(){

    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.getTop()<<endl;
    st.pop();
    cout<<st.getTop()<<endl;
    st.pop();
    cout<<st.getTop()<<endl;

    return 0;
}