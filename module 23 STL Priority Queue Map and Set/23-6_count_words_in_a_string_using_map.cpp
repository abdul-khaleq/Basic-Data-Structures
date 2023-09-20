#include <bits/stdc++.h>
using namespace std;
int main()
{
    string sentence;
    getline(cin, sentence);
    string word;
    stringstream ss(sentence);
    map<string, int> mp;
    while (ss >> word)
    {
        mp[word]++;
    }
    pair<string, int> mostTimes;
    mostTimes = {"A", INT_MIN};

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        // cout<<it->first<<" "<<it->second<<endl;
        if (it->second >= mostTimes.second)
        {
            mostTimes = {it->first, it->second};
        }
    }
    cout << mostTimes.first << " " << mostTimes.second << endl;

    return 0;
}