#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    stack<int> st;
    queue<int>q;
    int n;
    cin>>n;
    int m;
    cin>>m;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        st.push(x);
    }
    for(int i=0; i<m; i++){
        int x;
        cin>>x;
        q.push(x);
    }
    int sameAgain = 1;
    if(st.size() == q.size()){
         while(!st.empty() && !q.empty()){
         if(st.top() != q.front()){
            sameAgain = 0;
         }
         st.pop();
         q.pop();
        }
    }else{
        sameAgain = 0;
    }

    if(sameAgain){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
