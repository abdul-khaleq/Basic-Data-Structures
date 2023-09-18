#include <bits/stdc++.h>
using namespace std;
int main(){
    list<string> myList;
        string val;
    while(true){
        cin>>val;
        if(val == "end") break;
        myList.push_back(val);
    }
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        string val2;
        cin>>val2;
        cin.ignore();
        for(string val : myList){

            if(val2 == val){
                std::cout<<val<<endl;
            }
            if(val2 =='next'){
                std::cout<<val<<endl;
            }
    }
    }

    return 0;
}