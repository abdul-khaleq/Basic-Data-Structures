#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        pq.push(x);
    }
    int q;
    cin>>q;
    for(int i=0; i<q; i++){
        int x2;
        cin>>x2;
        if(x2 == 0){
            //insert & print min value
            int v;
            cin>>v;
            pq.push(v);
            cout<<pq.top()<<endl;
            
        }else if(x2 == 1){
            //print min value
            if(!pq.empty()){
            cout<<pq.top()<<endl;
            }else{
                cout<<"Empty"<<endl;
            }
        }else if(x2 == 2){
            // delete min val & print min value
            if(!pq.empty()){
                pq.pop();
            }
            if(!pq.empty()){
            cout<<pq.top()<<endl;
            }else{
                cout<<"Empty"<<endl;
            }
        }
        
    }
    return 0;
}