#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        set<int> s;
        vector<int> a;
        while(n--){
        int x;
        cin>>x;
        s.insert(x);
        }
    
    for(auto it = s.begin(); it != s.end(); it++){
        // cout<<*it<<" ";
        a.push_back(*it);
    }
    reverse(a.begin(), a.end());
    for(int val : a){
        cout<<val<<" ";
    }
    cout<<endl;
    }

    return 0;
}
