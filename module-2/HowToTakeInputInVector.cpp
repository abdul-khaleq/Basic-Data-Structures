#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n;
    // std::cin>>n;
    // std::vector<int> v(n);
    // for(int i=0; i<n; i++){
    //     std::cin>>v[i];
    // }
    // for(int i=0; i<n; i++){
    //     std::cout<<v[i];
    // }

    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    vector<int> b(n);
    // a.resize(n+m);
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    int x;
    cin>>x;
    for(int i=0; i<m; i++){
        a[x+i-1] = b[i];
    }
    for(int i=0; i<n+m; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}