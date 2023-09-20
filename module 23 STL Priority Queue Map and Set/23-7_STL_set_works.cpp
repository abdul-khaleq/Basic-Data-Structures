#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        s.insert(x); // O(logN)
    }
    // for(auto it = s.begin(); it != s.end(); it++){
    //     cout<<*it<<endl;
    // }
    cout << s.count(5) << endl; // O(logN)
    if (s.count(7))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}