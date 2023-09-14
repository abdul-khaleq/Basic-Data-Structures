#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=1; i<n; i++){
        cin>>a[i];
    }
    int pre[n];
    pre[0]=a[0];
    for(int i=1; i<n; i++){
        pre[i]= a[i]+pre[i-1];
    }

    return 0;
}
