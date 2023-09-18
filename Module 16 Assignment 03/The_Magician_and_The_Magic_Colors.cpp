#include <bits/stdc++.h>

using namespace std;



int main()  
{
    // Write your code here
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        queue<char> q;
        queue<char> qq;
        int n;
        cin>>n;
        for(int i=0; i<n; i++){
            char c;
            cin>>c;
            q.push(c);
        }

        while(!q.empty()){
            char f = q.front();
            q.pop();
            if(!q.empty()){
                if(q.front() == 'B' && f == 'R' || q.front() == 'R' && f == 'B'){
                    // cout<<"P";
                    qq.push('P');
                }else if(q.front() == 'G' && f == 'R' || q.front() == 'R' && f == 'G'){
                    // cout<<"Y";
                    qq.push('Y');
                }else if(q.front() == 'G' && f == 'B' || q.front() == 'B' && f == 'G'){
                    // cout<<"C";
                    qq.push('C');
                }
                q.pop();
            }else{
                // cout<<f;
                qq.push(f);
            }
        }
            while(!qq.empty()){
                char ff = qq.front();
                qq.pop();
                if(!qq.empty() && qq.front() == ff){
                    qq.pop();
                }else{
                    cout<<ff;
                }
            }
        cout<<endl;
    }
    return 0;
}