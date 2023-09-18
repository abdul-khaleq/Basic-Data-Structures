#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int found = false;
    for(int i=0; i<n; i++){
        for(int j=i+1;j<n;j++){
            if(a[i] == a[j]){
                found = true;
            } 
        }
    }
    if(found){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}