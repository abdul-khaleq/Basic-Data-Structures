#include <bits/stdc++.h>

using namespace std;
void isValidString(string s){
     stack<char> stA;
     stack<char> stB;
    for(char c:s){
        if(c=='A'){
            stA.push(c);
        }else{
            stB.push(c);
        }
    }


    int valid = 1;
    if(stA.size() == stB.size()){
        while(!stA.empty() || !stB.empty()){
            if(stA.top() != stB.top()){
                valid = 1;
            }
            stA.pop();
            stB.pop();
        }
    }else{
        valid = 0;
    }

    if(valid == 1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
};


int main()
{
    // Write your code here
    queue<string> q;

    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        string x;
        cin>>x;
        q.push(x);
    }

    while(!q.empty()){
        isValidString(q.front());
        q.pop();
    }

    return 0;
}
