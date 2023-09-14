#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    for(int i=0; i<t; i++){
    int n;
    cin>>n;
    map<int, int> mp;
    while(n--){
        int x;
        cin>>x;
        mp.insert({x, mp[x]++});
    }
    
    int maxNumber;
    int countMaxNumber = INT_MIN;
    
    for(auto it = mp.begin(); it != mp.end(); it++){
        if(countMaxNumber <= it->second){
           maxNumber = it->first;
           countMaxNumber = it->second;
        }

    }
    cout<<maxNumber<<" "<<countMaxNumber<<endl;
    }

    return 0;
}

