#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    queue<string> q;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(x==0){
            string xx;
            cin>>xx;
            q.push(xx);
        }else{
            if(!q.empty()){
            cout<<q.front()<<endl;
            q.pop();
            }else{
                cout<<"Invalid"<<endl;
            }
        }
    }
    

    return 0;
}
